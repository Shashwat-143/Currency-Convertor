#include <stdio.h>

int main()
{
    system("COLOR F4");
const double CAD = 60.54;
const double EUR = 87.36;
const double GBP = 103.19;
const double CLP = 0.093;
const double CNY = 11.7;
const double ZAR = 4.94;
const double TRY = 5.49;
const double JPY = 0.67;
const double AUD = 52.43;
const double NZD = 49.07;
const double PKR = 0.42;
const double RUB = 0.96;
const double AED = 20.42;
const double LKR = 0.34;
const double SGD = 55.27;
const double KWD = 247.59;
const double BHD = 199.06;
int code;
double cad; // Canadian dollar.
double eur; // euros.
double gbp; // united kingdom pound .
double clp; // Chilean peso .
double cny; // chenese yuan renminbi.
double zar; // south African rand.
double try; // Turkish lira.
double jpy; // Japanese yen.
double aud; // australian dollar rate.
double nzd; // New Zealand dollar.
double pkr; // pakistani rupees.
double rub; // Russian ruble.
double aed; // Dubai Emirati Dirhams.
double lkr; // Sri Lankan Rupees.
double sgd; // Singapore Dollars.
double kwd; // Kuwaiti dinar.
double bhd; // Bahraini dinar.
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    a:
    printf("\t\t\t\t\t\t*******************************************************************************************************");
    printf("\n\t\t\t\t\t\t------------------------------------WELCOME TO CURRENCY CONVERTOR-------------------------------------");
    printf("\n\t\t\t\t\t\t*******************************************************************************************************\n");
    printf("\n\t\t\t\t\t\t1 - CAD");
    printf("\n\t\t\t\t\t\t2 - EUR");
    printf("\n\t\t\t\t\t\t3 - GBP");
    printf("\n\t\t\t\t\t\t4 - CLP");
    printf("\n\t\t\t\t\t\t5 - CNY");
    printf("\n\t\t\t\t\t\t6 - ZAR");
    printf("\n\t\t\t\t\t\t7 - TRY");
    printf("\n\t\t\t\t\t\t8 - JPY");
    printf("\n\t\t\t\t\t\t9 - AUD");
    printf("\n\t\t\t\t\t\t10 - NZD");
    printf("\n\t\t\t\t\t\t11 - PKR");
    printf("\n\t\t\t\t\t\t12 - RUB");
    printf("\n\t\t\t\t\t\t13 - AED");
    printf("\n\t\t\t\t\t\t14 - LKR");
    printf("\n\t\t\t\t\t\t15 - SGD");
    printf("\n\t\t\t\t\t\t16 - KWD");
    printf("\n\t\t\t\t\t\t17 - BHD");
    printf("\n\n\t\t\t\t\t\t**************************************************************");
    printf("\n\t\t\t\t\t\tEnter country code, 1 to 17 that you wish to convert into INR: ");
    scanf("%d", &code);
     switch (code)
   {  case 1:
          printf("\n\t\t\t\t\t\tEnter amount of CAD: ");
          scanf("%lf", &cad);
          printf("\n\t\t\t\t\t\t-------------------------\n");
          printf("\t\t\t\t\t\t%.2f CAD = ", cad);
          cad = cad * CAD;
          printf("%.2f INR",cad);
          printf("\n\t\t\t\t\t\t-------------------------\n");
      break;
      case 2:
          printf("\n\t\t\t\t\t\tEnter amount of EUR: ");
          scanf("%lf", &eur);
          printf("\n\t\t\t\t\t\t-------------------------\n");
          printf("\t\t\t\t\t\t%.2f EUR = ", eur);
          eur = eur * EUR;
          printf("%.2f INR", eur);
          printf("\n\t\t\t\t\t\t-------------------------\n");
          break;
      case 3:
          printf("\n\t\t\t\t\t\tEnter amount of GBP: ");
          scanf("%lf", &gbp);
          printf("\n\t\t\t\t\t\t-------------------------\n");
          printf("\t\t\t\t\t\t%.2f GBP = ", gbp);
          gbp = gbp * GBP;
          printf("%.2f INR", gbp);
          printf("\n\t\t\t\t\t\t-------------------------\n");
      break;
      case 4:
          printf("\n\t\t\t\t\t\tEnter amount of CLP: ");
          scanf("%lf", &clp);
          printf("\n\t\t\t\t\t\t-------------------------\n");
          printf("\t\t\t\t\t\t%.2f CLP = ", clp);
          clp = clp * CLP;
          printf("%.2f INR", clp);
          printf("\n\t\t\t\t\t\t-------------------------\n");
        break;
        case 5:
          printf("\n\t\t\t\t\t\tEnter amount of CNY: ");
          scanf("%lf", &cny);
          printf("\n\t\t\t\t\t\t-------------------------\n");
          printf("\t\t\t\t\t\t%.2f CNY = ", cny);
          cny = cny * CNY;
          printf("%.2f INR", cny);
          printf("\n\t\t\t\t\t\t-------------------------\n");
      break;
      case 6:
          printf("\n\t\t\t\t\t\tEnter amount of ZAR: ");
          scanf("%lf", &zar);
          printf("\n\t\t\t\t\t\t-------------------------\n");
          printf("\t\t\t\t\t\t%.2f ZAR = ", zar);
          zar = zar * ZAR;
          printf("%.2f INR", zar);
          printf("\n\t\t\t\t\t\t-------------------------\n");
      break;
      case 7:
          printf("\n\t\t\t\t\t\tEnter amount of TRY: ");
          scanf("%lf", &try);
          printf("\n\t\t\t\t\t\t-------------------------\n");
          printf("\t\t\t\t\t\t%.2f TRY = ", try);
          try = try * TRY;
          printf("%.2f INR", try);
          printf("\n\t\t\t\t\t\t-------------------------\n");
      break;
      case 8:
          printf("\n\t\t\t\t\t\tEnter amount of JPY: ");
          scanf("%lf", &jpy);
          printf("\n\t\t\t\t\t\t-------------------------\n");
          printf("\t\t\t\t\t\t%.2f JPY = ", jpy);
          jpy = jpy * JPY;
          printf("%.2f INR", jpy);
          printf("\n\t\t\t\t\t\t-------------------------\n");
      break;
      case 9:
      printf("\n\t\t\t\t\t\t Enter amount of AUD: ");
      scanf("%lf", &aud);
      printf("\n\t\t\t\t\t\t-------------------------\n");
      printf("\t\t\t\t\t\t%.2f AUD = ", aud);
      aud = aud*AUD;
      printf("%.2f INR",aud);
      printf("\n\t\t\t\t\t\t-------------------------\n");
     break;
     case 10:
      printf("\n\t\t\t\t\t\t Enter amount of NZD: ");
      scanf("%lf", &nzd);
      printf("\n\t\t\t\t\t\t-------------------------\n");
      printf("\t\t\t\t\t\t%.2f NZD = ", nzd);
      nzd = nzd*NZD;
      printf("%.2f INR",nzd);
      printf("\n\t\t\t\t\t\t-------------------------\n");
     break;
      case 11:
      printf("\n\t\t\t\t\t\tEnter amount of PKR: ");
      scanf("%lf", &pkr);
      printf("\n\t\t\t\t\t\t-------------------------\n");
      printf("\t\t\t\t\t\t%.2f PKR = ", pkr);
      pkr = pkr*PKR;
      printf("%.2f INR",pkr);
      printf("\n\t\t\t\t\t\t-------------------------\n");
     break;
     case 12:
      printf("\n\t\t\t\t\t\t Enter amount of RUB: ");
      scanf("%lf", &rub);
      printf("\n\t\t\t\t\t\t-------------------------\n");
      printf("\t\t\t\t\t\t%.2f RUB = ", rub);
      rub = rub*RUB;
      printf("%.2f INR",rub);
      printf("\n\t\t\t\t\t\t-------------------------\n");
     break;
     case 13:
      printf("\n\t\t\t\t\t\t Enter amount of AED: ");
      scanf("%lf", &aed);
      printf("\n\t\t\t\t\t\t-------------------------\n");
      printf("\t\t\t\t\t\t%.2f AED = ", aed);
      aed = aed*AED;
      printf("%.2f INR",aed);
      printf("\n\t\t\t\t\t\t-------------------------\n");
     break;
     case 14:
      printf("\n\t\t\t\t\t\t Enter amount of LKR: ");
      scanf("%lf", &lkr);
      printf("\n\t\t\t\t\t\t-------------------------\n");
      printf("\t\t\t\t\t\t%.2f LKR = ", lkr);
      lkr =lkr*LKR;
      printf("%.2f INR",lkr);
      printf("\n\t\t\t\t\t\t-------------------------\n");
     break;
      case 15:
      printf("\n\t\t\t\t\t\t Enter amount of SGD: ");
      scanf("%lf", &sgd);
      printf("\n\t\t\t\t\t\t-------------------------\n");
      printf("\t\t\t\t\t\t%.2f SGD = ", sgd);
      sgd =sgd*SGD;
      printf("%.2f INR",sgd);
      printf("\n\t\t\t\t\t\t-------------------------\n");
     break;
      case 16:
      printf("\n\t\t\t\t\t\t Enter amount of KWD: ");
      scanf("%lf", &kwd);
      printf("\n\t\t\t\t\t\t-------------------------\n");
      printf("\t\t\t\t\t\t%.2f KWD = ", kwd);
      kwd =kwd*KWD;
      printf("%.2f INR",kwd);
      printf("\n\t\t\t\t\t\t-------------------------\n");
     break;
      case 17:
      printf("\n\t\t\t\t\t\tEnter amount of BHD: ");
      scanf("%lf", &bhd);
      printf("\n\t\t\t\t\t\t-------------------------\n");
      printf("\t\t\t\t\t\t%.2f BHD = ", bhd);
      bhd =bhd*BHD;
      printf("%.2f INR",bhd);
      printf("\n\t\t\t\t\t\t-------------------------\n");
     break;
     default:
          printf("\n\t\t\t\t\t\t%d is an invalid country code!", code);
      break;
    }
    int choice;
    printf("\n\n\t\t\t\t\t\tDo you want to convert another currency (1-Yes / 2-No) -  ");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("\n\n\n");
        goto a;
    }
    printf("\n\n\t\t\t\t\t\t***************************************************************************************************");
    printf("\n\t\t\t\t\t\t------------------------------------------------THANK YOU---------------------------------------------");
    printf("\n\t\t\t\t\t\t*****************************************************************************************************");
        return 0;
}
