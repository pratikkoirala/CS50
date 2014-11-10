<ul class="nav nav-pills">
    <li><a href="quote.php">Quote</a></li>
    <li><a href="buy.php">Buy</a></li>
    <li><a href="sell.php">Sell</a></li>
    <li><a href="history.php">History</a></li>
    <li><a href="logout.php"><strong>Log Out</strong></a></li>
</ul>
<table class="table table-striped">
    <thead>
        <tr>
            <th>Symbol</th>
            <th>Name</th>
            <th>Shares</th>
            <th>Value</th>
            <th>Total</th>
        </tr>
    </thead>
    <tbody>
            <?php
                // set location for money format
                setlocale(LC_MONETARY, 'en_US');

                foreach ($holdings as $holding)
               {
                   print("<tr>");

                   // print SYMBOL and # of SHARES
                   print("<th>" . $holding["symbol"] . "</th>");
                   print("<th>" . $holding["name"] . "</th>");
                   print("<th>" . $holding["shares"] . "</th>");

                   // print PRICE right now
                   print("<th>" . "$" . money_format('%i', $holding["price"]) . "</th>");

                    // print TOTAL
                   print("<th>" . "$" . money_format('%i', ($holding["price"] * $holding["shares"])) . "</th>");

                   print("</tr>");
                }
            ?>
        <tr>
            <th colspan="4">CASH</th>
            <th>$<?= money_format('%i', $holding["cash"])?></th>
        </tr>
    </tbody>
</table>
<div>
    <a href="logout.php">Log Out</a>
</div>

