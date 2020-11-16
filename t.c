#include <stdio.h>
int main() {

int ds=0, ds2=0, l=0, k=0, dia=1, m=1, i;
char tra [40];
i=1;
tra[0]='|';
while (i<30){
tra [i] ='-';
i++;
}
tra [i] ='|';

switch (m){

case (1):
printf("|Janeiro |\n");
printf("%s\n", tra);
printf("| dom seg ter qua qui sex sab |\n");
printf ("| --  --  --  ");
ds=(ds2+30)%7;
while (l<6){

while (k<4){
if((k>=ds2)&&((dia>=1)&&(dia<=30))){
if ((dia>=1)&&(dia<=9)){
printf(" 0%d ",dia);
dia++;
k++;
}
else {
printf(" %d",dia);
dia++;
k++;
}
}
else {
printf(" --");
k++;
}
}
printf(" |\n");
ds2=0;
k=0;
l++;
}
l=0;
dia=1;
printf("%s\n", tra);
m++;


case (2):
printf("|Fevereiro |\n");
printf("%s\n", tra);
printf("| dom seg ter qua qui sex sab |\n");
ds=(ds2+30)%7;
while (l<6){
printf("|");
while (k<7){
if((k>=ds2)&&((dia>=1)&&(dia<=30))){
if ((dia>=1)&&(dia<=9)){
printf(" 0%d",dia);
dia++;
k++;
}
else {
printf(" %d",dia);
dia++;
k++;
}
}
else {
printf(" --");
k++;
}
}
printf(" |\n");
ds2=0;
k=0;
l++;
}
l=0;
dia=1;
printf("%s\n", tra);
m++;


case (3):
printf("|Março |\n");
printf("%s\n", tra);
printf("| dom seg ter qua qui sex sab |\n");
ds=(ds2+30)%7;
while (l<6){
printf("|");
while (k<7){
if((k>=ds2)&&((dia>=1)&&(dia<=30))){
if ((dia>=1)&&(dia<=9)){
printf(" 0%d",dia);
dia++;
k++;
}
else {
printf(" %d",dia);
dia++;
k++;
}
}
else {
printf(" --");
k++;
}
}
printf(" |\n");
ds2=0;
k=0;
l++;
}
l=0;
dia=1;
printf("%s\n", tra);
m++;


case (4):
printf("|Abril |\n");
printf("%s\n", tra);
printf("| dom seg ter qua qui sex sab |\n");
ds=(ds2+30)%7;
while (l<6){
printf("|");
while (k<7){
if((k>=ds2)&&((dia>=1)&&(dia<=30))){
if ((dia>=1)&&(dia<=9)){
printf(" 0%d",dia);
dia++;
k++;
}
else {
printf(" %d",dia);
dia++;
k++;
}
}
else {
printf(" --");
k++;
}
}
printf(" |\n");
ds2=0;
k=0;
l++;
}
l=0;
dia=1;
printf("%s\n", tra);
m++;


case (5):
printf("|Maio |\n");
printf("%s\n", tra);
printf("| dom seg ter qua qui sex sab |\n");
ds=(ds2+30)%7;
while (l<6){
printf("|");
while (k<7){
if((k>=ds2)&&((dia>=1)&&(dia<=30))){
if ((dia>=1)&&(dia<=9)){
printf(" 0%d",dia);
dia++;
k++;
}
else {
printf(" %d",dia);
dia++;
k++;
}
}
else {
printf(" --");
k++;
}
}
printf(" |\n");
ds2=0;
k=0;
l++;
}
l=0;
dia=1;
printf("%s\n", tra);
m++;


case (6):
printf("|Junho |\n");
printf("%s\n", tra);
printf("| dom seg ter qua qui sex sab |\n");
ds=(ds2+30)%7;
while (l<6){
printf("|");
while (k<7){
if((k>=ds2)&&((dia>=1)&&(dia<=30))){
if ((dia>=1)&&(dia<=9)){
printf(" 0%d",dia);
dia++;
k++;
}
else {
printf(" %d",dia);
dia++;
k++;
}
}
else {
printf(" --");
k++;
}
}
printf(" |\n");
ds2=0;
k=0;
l++;
}
l=0;
dia=1;
printf("%s\n", tra);
m++;

case (7):
printf("|Julho |\n");
printf("%s\n", tra);
printf("| dom seg ter qua qui sex sab |\n");
ds=(ds2+30)%7;
while (l<6){
printf("|");
while (k<7){
if((k>=ds2)&&((dia>=1)&&(dia<=30))){
if ((dia>=1)&&(dia<=9)){
printf(" 0%d",dia);
dia++;
k++;
}
else {
printf(" %d",dia);
dia++;
k++;
}
}
else {
printf(" --");
k++;
}
}
printf(" |\n");
ds2=0;
k=0;
l++;
}
l=0;
dia=1;
printf("%s\n", tra);
m++;


case (8):
printf("|Agosto |\n");
printf("%s\n", tra);
printf("| dom seg ter qua qui sex sab |\n");
ds=(ds2+30)%7;
while (l<6){
printf("|");
while (k<7){
if((k>=ds2)&&((dia>=1)&&(dia<=30))){
if ((dia>=1)&&(dia<=9)){
printf(" 0%d",dia);
dia++;
k++;
}
else {
printf(" %d",dia);
dia++;
k++;
}
}
else {
printf(" --");
k++;
}
}
printf(" |\n");
ds2=0;
k=0;
l++;
}
l=0;
dia=1;
printf("%s\n", tra);
m++;


case (9):
printf("|Setembro |\n");
printf("%s\n", tra);
printf("| dom seg ter qua qui sex sab |\n");
ds=(ds2+30)%7;
while (l<6){
printf("|");
while (k<7){
if((k>=ds2)&&((dia>=1)&&(dia<=30))){
if ((dia>=1)&&(dia<=9)){
printf(" 0%d",dia);
dia++;
k++;
}
else {
printf(" %d",dia);
dia++;
k++;
}
}
else {
printf(" --");
k++;
}
}
printf(" |\n");
ds2=0;
k=0;
l++;
}
l=0;
dia=1;
printf("%s\n", tra);
m++;


case (10):
printf("|Outubro |\n");
printf("%s\n", tra);
printf("| dom seg ter qua qui sex sab |\n");
ds=(ds2+30)%7;
while (l<6){
printf("|");
while (k<7){
if((k>=ds2)&&((dia>=1)&&(dia<=30))){
if ((dia>=1)&&(dia<=9)){
printf(" 0%d",dia);
dia++;
k++;
}
else {
printf(" %d",dia);
dia++;
k++;
}
}
else {
printf(" --");
k++;
}
}
printf(" |\n");
ds2=0;
k=0;
l++;
}
l=0;
dia=1;
printf("%s\n", tra);
m++;


case (11):
printf("|Novembro |\n");
printf("%s\n", tra);
printf("| dom seg ter qua qui sex sab |\n");
ds=(ds2+30)%7;
while (l<6){
printf("|");
while (k<7){
if((k>=ds2)&&((dia>=1)&&(dia<=30))){
if ((dia>=1)&&(dia<=9)){
printf(" 0%d",dia);
dia++;
k++;
}
else {
printf(" %d",dia);
dia++;
k++;
}
}
else {
printf(" --");
k++;
}
}
printf(" |\n");
ds2=0;
k=0;
l++;
}
l=0;
dia=1;
printf("%s\n", tra);
m++;


case (12):
printf("|Dezembro |\n");
printf("%s\n", tra);
printf("| dom seg ter qua qui sex sab |\n");
ds=(ds2+30)%7;
while (l<6){
printf("|");
while (k<7){
if((k>=ds2)&&((dia>=1)&&(dia<=30))){
if ((dia>=1)&&(dia<=9)){
printf(" 0%d",dia);
dia++;
k++;
}
else {
printf(" %d",dia);
dia++;
k++;
}
}
else {
printf(" --");
k++;
}
}
printf(" |\n");
ds2=0;
k=0;
l++;
}
l=0;
dia=1;
printf("%s\n", tra);
m++;
break;
}
return 0;
}