<?php include_once('login1.inc');?>
<?php include_once('header.inc'); ?>
<div id="section">
    <h1>LOGIN</h1>
    <div id="register">
        <?php if($message!=""): ?>            
                <ul class='message'>
                <?php echo $message; ?> 
               </ul>                
            <?php endif; ?>
        <form autocomplete="off" action="" method="post">
            <div class="group">
                <label class="js-form-required form-required">Username</label>
                <div class="input"><input autocomplete="off" type="text" name="uname" id="uname" value=""></div>
            </div>
            <div class="group">
                <label class="js-form-required form-required">Password</label>
                <div class="input"><input type ="password" name="password" id="password" value=""></div>
            </div>
            <div class="group">               
                <div class="input"><input type="submit" name="submit" id="submit" value="SUBMIT"></div>
            </div>
        </form>
        
        
    </div>
    <?php include_once('footer.inc'); ?>
    