<?php

     // configuration
     require("../includes/config.php");
 
    // if user reached page via GET (as by clicking a link or via redirect)
    if ($_SERVER["REQUEST_METHOD"] == "GET")
    {
        // render form
        render("register_form.php", ["title" => "Register"]);
    }
    // else if user reached page via POST (as by submitting a form via POST)
    else if ($_SERVER["REQUEST_METHOD"] == "POST")
    {
        // $_POST is the method of submission, where "username" is the name from the HTML form
        if(empty($_POST["username"]) || empty($_POST["password"]) || ($_POST["password"] != $_POST["confirmation"]))
            apologize("Bad registration! Try again!");
        else
        {
            if(query("INSERT INTO users (username, hash, cash) VALUES(?, ?, 10000.00)", $_POST["username"], crypt($_POST["password"])) === false)
                apologize("Couldn't enter into table!");
            else
            {
                $rows = query("SELECT LAST_INSERT_ID() as id");
                $id = $rows[0]["id"];
                $_SESSION["id"] = $id; /* Log user in */
            }

            // redirect to main page
            redirect("index.php");
        }
    }
?>
