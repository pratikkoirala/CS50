<form action="sell.php" method="post">
    <fieldset>
        <div class="form-group">
            <select class="form-control" name="symbol">
            <?php foreach($stocks as $stock): ?>
                <option value=""></option>
                <option value="<?php echo $stock ?>"><?=$stock?></option>       
            <?php endforeach ?>
            </select>
        </div>
        <div class="form-group">
            <input autofocus class="form-control" name="shares" placeholder="Shares" type="text"/>
        </div>
        <div class="form-group">
            <button type="submit" class="btn btn-default">Sell</button>
        </div>
    </fieldset>
</form>
<div>
    or <a href="index.php">return</a> home
</div>
