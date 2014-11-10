<?php

     // configuration
     require("../includes/config.php");

    // if user reached page via GET (as by clicking a link or via redirect)
    if ($_SERVER["REQUEST_METHOD"] == "GET")
    {
        // render form
        render("sell_form.php", ["title" => "Sell!"]);
    }
    // else if user reached page via POST (as by submitting a form via POST)
    else if ($_SERVER["REQUEST_METHOD"] == "POST")
    {
        /* the fields in table 'user' are: id, username, hash, cash and the
           fields in portfolio are: id, symbol, shares */

        // look up symbol
        $stock = lookup($_POST["symbol"]);

        // if lookup failed
        if($stock === false)
            apologize("Sorry! couldn't find stock!");

        // get price
        $price = $stock["price"];

        // profit = price * (# of shares)
        $profit = $price * $_POST["shares"];

        // update user's cash
        if(query("UPDATE users SET cash = cash + ? WHERE id = ?", $profit, $_SESSION["id"]) === false)
            apologize("Can't update table!");
        else
        {
            // Select rows
            $rows = query("SELECT * FROM portfolio WHERE id = ? AND symbol = ?", $_SESSION["id"], $_POST["symbol"]);

            // update portfolio
            if($rows === false)
                apologize("Can't update table!");
            else
            {
                // amount of shares user has
                $row = $rows[0];

                if($row["shares"] < $_POST["shares"])
                    apologize("Sorry! you don't have that much stock!");
                else if($row["shares"] == $_POST["shares"])
                {
                    if(query("DELETE FROM portfolio WHERE id = ? AND symbol = ?", $_SESSION["id"], $_POST["symbol"]) === false) 
                        apologize("Can't update table!");
                    else
                        render("sold.php", ["title" => "Sold!", "symbol" => $_POST["symbol"], "shares" => $_POST["shares"], "profit" => $price]);
                }
                else
                {
                    if(query("UPDATE portfolio SET shares = shares - ? WHERE id = ? AND symbol = ?", $_POST["shares"], $_SESSION["id"], $_POST["symbol"]) === false) 
                        apologize("Can't update table!");
                    else
                        render("sold.php", ["title" => "Sold!", "symbol" => $_POST["symbol"], "shares" => $_POST["shares"], "profit" => $profit]);
                }
            }
        }
    }
?>
