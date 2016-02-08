#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

Invoice::Invoice()
{
	partNum=" ";
	partDesc=" ";
	quantity=0;
	priceItem=0.0;
}
Invoice::Invoice(string partNumber,string partDescription,int quant,double price)
{
	partNum=partNumber;
	partDesc=partDescription;
	quantity=quant;
	priceItem=price;
}
void Invoice::setPartNum(string partNumber)
{
	partNum=partNumber;
}
string Invoice::getPartNum()
{
	return partNum;
}
void Invoice::setPartDesc(string partDescription)
{
	partDesc=partDescription;
}
string Invoice::getPartDesc()
{
	return partDesc;
}
void Invoice::setQuantity(int quant)
{
	quantity=quant;
}
int Invoice::getQuantity()
{
	return quantity;
}
void Invoice::setPriceItem(double price)
{
	priceItem=price;
}
double Invoice::getPriceItem()
{
	return priceItem;
}
double Invoice::getInvoiceAmount()
{
	return (quantity*priceItem);
}
