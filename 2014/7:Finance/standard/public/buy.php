<?php

     // configuration
     require("../includes/config.php");

    // if user reached page via GET (as by clicking a link or via redirect)
    if ($_SERVER["REQUEST_METHOD"] == "GET")
    {
        // render form
        render("buy_form.php", ["title" => "Buy!"]);
    }
    // else if user reached page via POST (as by submitting a form via POST)
    else if ($_SERVER["REQUEST_METHOD"] == "POST")
    {
        /* the fields in table 'user' are: id, username, hash, cash and the
           fields in portfolio are: id, symbol, shares */
        if(empty($_POST["symbol"]) || empty($_POST["shares"]))
            apologize("Please fill out all fields!");

        $lookup = lookup(strtoupper($_POST["symbol"]));

        if($lookup === false)
            apologize("can't find that stock!");

        $cash = query("SELECT cash FROM users WHERE id = ?", $_SESSION["id"]);

        if($cash === false)
            apologize("can't find that your cash!");

        if($cash[0]["cash"] < ($lookup["price"] * $_POST["shares"]))
            apologize("you don't have enough money!");
        else
        {
            // buy stock

            redirect("/");
        }
    }
?>
