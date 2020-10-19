<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Program to find string length</title>
</head>
<body>
<h1>Program to find string length</h1>
<span>String:</span><input type="text" name="test" id="test" value="Example of String."> <button type="submit" onclick="calculate()">Calculate</button>
<span id="response"></span>
<script type = "text/javascript">
    calculate();
    function calculate(){
        let text = document.querySelector('#test').value; 
        let elem = document.querySelector('#response');
        let html = elem.innerHTML;
        elem.innerHTML = "</br> The Length of this text is: " + text.length + " characters.";
    }
</script>      
</body>
</html>
