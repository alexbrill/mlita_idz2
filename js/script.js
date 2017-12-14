"use strict";

//var str = "-23";

button.onclick = function() {
    var str = text.value;

var printBlock = document.getElementById("printBlock");

var i;
var result;

i = 0; 
		
if (S0())
	printBlock.textContent = 'принадлежит';
else
	printBlock.textContent = 'не принадлежит';


	
function S0()
{
	var ch = Read(); 
	
	if (ch == '-')
		return S1();
	else if (Odd(ch))
		return S2();
	else if (EvenWithout0(ch))
		return S3();
	else
		return false;
}

function S1()
{
	var ch = Read();
	
	if (Odd(ch))
		return S2();
	else if (EvenWithout0(ch))
		return S3();
	else
		return false;	
}

function S2()
{
	var ch = Read(); 
	
	if (ch == '0')
		return S4();
	else if (EvenWithout0(ch))
		return S3();
	else if (Odd(ch))
		return S2();
	else
		return false;
}

function S3()
{
	var ch = Read(); 
	
	if (Even(ch))
		return S3();
	else if (Odd(ch))
		return S2();
	else
		return false;
}

function S4()
{
	var ch = Read();
	
	if (ch == undefined)
		return true;
	else if (Even(ch))
		return S3();
	else if (Odd(ch))
		return S2();
	else
		return false;
}

function Odd(ch)
{
	var odd = "13579";
	
	if (find(odd, ch))
		return true;
	else
		return false;
}

function Even(ch)
{
	var even = "02468";
	
	if (find(even, ch))
		return true;
	else
		return false;
}

function EvenWithout0(ch)
{
	var evenWithout0 = "2468"; 
	
	if (find(evenWithout0, ch))
		return true;
	else
		return false;
}

function Read() { return str[i++]; }

function find(array, ch)
{
	for (var i = 0; array[i] != undefined; ++i)
		if (array[i] == ch)
			return true;

	return false;
}

}