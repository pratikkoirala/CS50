<?php

    /* Do all your logic here! */

    // configuration
    require("../includes/config.php"); 

    // positions equals an empty array
    $positions = [];

    // find array of arrays that contains all contents of user's holdings
    $rows = query("SELECT * FROM portfolio WHERE id = ?", $_SESSION["id"]);

    $user = query("SELECT cash FROM users WHERE id = ?", $_SESSION["id"]);

    // make your own array, and put everything inside it
    foreach($rows as $row)
    {
        $lookup = lookup($row["symbol"]);

        if($lookup !== false)
        {
            $positions[] = [
                            "symbol" => $row["symbol"],
                            "shares" => $row["shares"],
                            "cash" => $user[0]["cash"],
                            "price" => $lookup["price"],
                            "name" => $lookup["name"]
                         ];
        }

    }

    // render portfolio while passing user's holdings to Portfolio
    render("portfolio.php", ["title" => "Portfolio", "holdings" => $positions]);

?>
