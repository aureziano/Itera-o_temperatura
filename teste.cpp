#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
 	FILE *arq,*arq1;
 	int i;
 	float h = 1.5;
 	int w = 3;
 	float r = 1.5;
 	float d1 = 0.3;
 	float d2 = 0.2;
 	int af = 12;
 	float av = 4.5;
 	float at = 58.7;
 	float Q = 6.384;
 	float tf = 950.004;
 	float z = 1.644;
 	float x = 0.5;
 	int tw = 1006;
 	int tz = 540;
 	int to= 20;
 	float tz1;
	float tz2;
 	float ac = 0.01;
  	double dv = 0; // 0 a 2 
  	double d = 0.1;//0.1 a 1.5  
  	float fi1,fif,fi;
  	float fif2;
  	float fif4d,fif4t,fif4;
  	float fif3, fif3t,fif3d;
  	float fif1t,fi1d;
  	float fif12t, fif12d;
  	float fif11t,fif11d,fi11t;
  	float fiz11, fiz12, fiz13,fiz14,fiz1s1, fiz31, fiz32, fiz3s1, fiz41, fiz42, fz4s1, fiz1s2, fiz21, fiz22, fiz2s2, fiz3s2, fiz4s2,fiz1s3,fiz4s4;
  	float fz1s3 = 0, fiz2s3= 0, fiz4s1 = 0, fiz3s3= 0, fiz4s3= 0, fiz1s4= 0, fiz2s4= 0,fiz3s4= 0,fizs4= 0,fiz1s5= 0,fiz2s5= 0,fiz3s5= 0, fiz4s5 = 0;
  	float fiz1;
	float fiz2;
	float fiz3;
	float fiz4;
  	float fiz;
  	int ef;
  	float lb,lb1,lb2,lb3,lb4, lbs1, lbs2,lbs3, lb1s4, lb2s4, lb3s4, lb4s4, lb1s5, lb2s5, lb3s5, lb4s5;
  	float ez, ez1, ez2,ez3,ez4;
  	float az1, az2, az;
  	float if_1;
  	float iz, iz_1, iz_2, iz_3;
  	float iz1, iz2, iz3, iz4;
  	float h1,h3, h11,h4, h12,h13,h14, h31, h32, h41, h42, h21, h22;
  	float w1,w11,w12,w3,w4,w13,w14, w21, w22, w32, w31;
  	float s1,s3,s4;
	float a,b, c,D, e ,s;
	float x1, erro;
  	int c1 = 1;
  	int c2 = 1;
  	int c3 = 1 ;
  	int c4 =1 ;
  	int ver;
  	
  	int fiz2s1 = 0;
  	int result,result1;
  	int sit;
  	arq = fopen("ArqGrav.txt", "wt");  // Cria um arquivo texto para gravação
  	arq1 = fopen("ArqGrav1.txt", "wt");  // Cria um arquivo texto para gravação
//  	if (arq == NULL) // Se nào conseguiu criar
//  	{
// 		printf("Problemas na CRIACAO do arquivo\n");
//   		return i;
//   }
	//fator de configuração da chama
	
	
  	while (d <=1.6)
  	{
  		dv=0;
	  	while (dv <= 2.1)
	  	{
	  		s1 = d;
	  		printf("D: %f\tDv: %f\n",d,dv);
	  		h1 = h + dv;
	  		w11 = r;
	  		a = h1/s1;
	  		b = w11/s1;
	  		float teste =atan(a/pow(1+pow(b,2),0.5));
	  		fif11t = (1/(2*M_PI))*(atan(a)-(1/pow(1+pow(b,2),0.5))*atan(a/pow(1+pow(b,2),0.5)));
	  		
	  		
	  		w12 = w -r;
	  		a= h1/s1;
	  		b = w12/s1;
	  		fif12t = (1/(2*M_PI))*(atan(a)-(1/pow(1+pow(b,2),0.5))*atan(a/pow(1+pow(b,2),0.5)));
	  		fif1t= fif11t + fif12t;
	  		h1 = dv;
	  		w11 = r;
	  		a = h1/s1;
	  		b = w11/s1;
	  		
	  		
	  		
	  		fif11d = (1/(2*M_PI))*(atan(a)-(1/pow(1+pow(b,2),0.5))*atan(a/pow(1+pow(b,2),0.5)));
	  		
	  		w12 = w-r;
	  		a = h1/s1;
	  		b = w12/s1;
	  		fif12d = (1/(2*M_PI))*(atan(a)-(1/pow(1+pow(b,2),0.5))*atan(a/pow(1+pow(b,2),0.5)));
	  		
	  		float fif1d= fif11d + fif12d;
	  		float fif1 = fif1t - fif1d;
	  		fif2 = 0;
	  		
	  		
	  		
	  		
	  		s3 = d;
	  		h3= h + dv + d2/2;
	  		w3 = r - d1/2;
	  		a = h3/s3;
	  		b = w3/s3;
	  		fif3t = (1/(2*M_PI))*(atan(a)-(1/pow(1+pow(b,2),0.5))*atan(a/pow(1+pow(b,2),0.5)));
	  		
	  		h3 = dv + d2/2;
	  		w3 = r - d1/2;
	  		a = h3/s3;
	  		b = w3/s3;
	  		fif3d = (1/(2*M_PI))*(atan(a)-(1/pow(1+pow(b,2),0.5))*atan(a/pow(1+pow(b,2),0.5)));
	  		fif3 = fif3t - fif3d;

			s4 = d;	  		
	  		h4 = h + dv + d2/2;
	  		w4 = w - r - d1/2;
	  		a= h4/s4;
	  		b = w4/s4;
	  		fif4t = (1/(2*M_PI))*(atan(a)-(1/pow(1+pow(b,2),0.5))*atan(a/pow(1+pow(b,2),0.5)));
	  		 		
	  		h4 = dv + d2/2;
	  		a= h4/s4;
	  		b = w4/s4;
	  		fif4d = (1/(2*M_PI))*(atan(a)-(1/pow(1+pow(b,2),0.5))*atan(a/pow(1+pow(b,2),0.5)));
	  		
	  		
	  		fif4 = fif4t - fif4d;
	  		fif = ((c1*fif1 + c2*fif2)*d1+(c3*fif3 + c4*fif4)*d2)/((c1+c2)*d1+(c3+c4)*d2);
//	  		printf("Dv=%f ; D=%f \t fif1 : %f \tfif2 : %f\tfif3 : %f\tfif4 : %f\n",dv,d,fif1,fif2,fif3,fif4); 	
	  		sit = 0;
	  		float teste1 = dv+d2/2;//dv+ 0,1
	  		float teste2 = z;//1,644
	  		float teste3 = x + h/3;//1
	  		
	  		if(((dv+d2/2) > z) && ((d <= x + h/3))) //dv > 1,5  e d <= 1
	  			sit = 1;
	  		else if(((dv+d2/2) < z) && ((d > x + h/3)))	//dv < 1,5  e d > 1
	  			sit = 2;
			else if(((dv+d2/2) > z) && ((d > x + h/3)))	//dv > 1,6 e d > 1
	  			sit = 3;
			else if(((dv+d2) <= z) && ((d <= x + h/3))) //dv < 1,5  e d <= 1	
	  			sit = 4;
	  		else //dv = 1.544
				sit = 5;
			printf("SIT : %d\n",sit); 
			if(sit == 1)
			{
				s1 = (dv-z);
				h11 = (x - d + h/3);
				w11 = r;
				a = h11/s1;
				b = w11/s1;
				fiz11 = (1/(2*M_PI))*( ( ((a/(pow(1+pow(a,2),0.5))) ) * atan( (b/(pow(1+pow(a,2),0.5)))) ) + ( ((b/(pow(1+pow(b,2),0.5)))) * atan((a/(pow(1+pow(b,2),0.5))) )  ) );
				
			
				h12 = (x-d+h/3);
				w12 = (w-r);
				a = h12/s1;
				b = w12/s1;
				fiz12 = (1/(2*M_PI))*( ( ((a/(pow(1+pow(a,2),0.5))) ) * atan( (b/(pow(1+pow(a,2),0.5)))) ) + ( ((b/(pow(1+pow(b,2),0.5)))) * atan((a/(pow(1+pow(b,2),0.5))) )  ) );
				
				h13 = d;
				w13 = r;
				a = h13/s1;
				b = w13/s1;
				fiz13 = (1/(2*M_PI))*( ( ((a/(pow(1+pow(a,2),0.5))) ) * atan( (b/(pow(1+pow(a,2),0.5)))) ) + ( ((b/(pow(1+pow(b,2),0.5)))) * atan((a/(pow(1+pow(b,2),0.5))) )  ) );
				
				h14 = d;
				w14 = (w-r);
				a= h14/s1;
				b = w14/s1;
				fiz14 = (1/(2*M_PI))*( ( ((a/(pow(1+pow(a,2),0.5))) ) * atan( (b/(pow(1+pow(a,2),0.5)))) ) + ( ((b/(pow(1+pow(b,2),0.5)))) * atan((a/(pow(1+pow(b,2),0.5))) )  ) );
				
				fiz1s1 = fiz11 +fiz12 + fiz13 + fiz14;
				fiz2s1 = 0;
				
				s3 = (dv - z +d2/2);
				w3 = (r-d1/2);
				
				h31 = (x - d + h/3);
				a = h31/s3;
				b = w3/s3;
				fiz31 = (1/(2*M_PI))*(atan(a)-(1/(pow(1+pow(b,2),0.5)))*atan(a/(pow(1+pow(b,2),0.5))));
				
				h32 = d;
				a = h32/s3;
				b = w3/s3;
				fiz32 = (1/(2*M_PI))*(atan(a)-(1/(pow(1+pow(b,2),0.5)))*atan(a/(pow(1+pow(b,2),0.5))));
				
				fiz3s1 = fiz31 + fiz32;
				
				s4 = (dv -z + d2/2);
				w4 = (w- r - d1/2);
				
				h41 = (x - d + h/3);
				a = h41/s4;
				b = w4/s4;
				fiz41 = (1/(2*M_PI))*(atan(a)-(1/(pow(1+pow(b,2),0.5)))*atan(a/(pow(1+pow(b,2),0.5))));
				
				h42 = d;
				a = h42/s4;
				b = w4/s4;
				fiz42 = (1/(2*M_PI))*(atan(a)-(1/(pow(1+pow(b,2),0.5)))*atan(a/(pow(1+pow(b,2),0.5))));
				
				fiz4s1 = fiz41 + fiz42 ;	
				
			}	
			
			if(sit == 2)
			{
				s = (d-(x +h/3));
				h11 = dv;
				w11 = r;
				a = h11/s;
				b = w11/s;
				fiz11 = (1/(2*M_PI))*( ((a/(pow(1+pow(a,2),0.5))) * (atan((b/(pow(1+pow(a,2),0.5))))) ) + ( (b/(pow(1+pow(b,2),0.5)))* (atan((a/(pow(1+pow(b,2),0.5))))) ) );
				
				h12 = dv;
				w12 = (w-r);
				a = h12/s;
				b = w12/s;
				fiz12 =  (1/(2*M_PI))*( ((a/(pow(1+pow(a,2),0.5))) * (atan((b/(pow(1+pow(a,2),0.5))))) ) + ( (b/(pow(1+pow(b,2),0.5)))* (atan((a/(pow(1+pow(b,2),0.5))))) ) );
				
				fiz1s2 = fiz11 + fiz12;
				
				h21 = z - (dv + d2);
				w21 = r;
				a = h21/s;
				b = w21/s;
				fiz21 =  (1/(2*M_PI))*( ((a/(pow(1+pow(a,2),0.5))) * (atan((b/(pow(1+pow(a,2),0.5))))) ) + ( (b/(pow(1+pow(b,2),0.5)))* (atan((a/(pow(1+pow(b,2),0.5))))) ) );
				
				h22 = z - (dv + d2);;
				w22 = (w-r);
				a = h22/s;
				b = w22/s;
				fiz22 =  (1/(2*M_PI))*( ((a/(pow(1+pow(a,2),0.5))) * (atan((b/(pow(1+pow(a,2),0.5))))) ) + ( (b/(pow(1+pow(b,2),0.5)))* (atan((a/(pow(1+pow(b,2),0.5))))) ) );
				
				fiz2s2 = fiz21 + fiz22;
				
				w3 = (r - d1/2);
				h31 = (h - (dv + d2/2));
				a= h31/s;
				b = w3/s;
				fiz31 = (1/(2*M_PI))*(atan(a)-(1/(pow(1+pow(b,2),0.5)))*atan(a/(pow(1+pow(b,2),0.5))));

				h32 = dv + d2/2;
				a = h32/s;
				b = w3/s;
				fiz32= (1/(2*M_PI))*(atan(a)-(1/(pow(1+pow(b,2),0.5)))*atan(a/(pow(1+pow(b,2),0.5))));
				
				fiz3s2 = fiz31 + fiz32;
				
				w4 = (w - (r + d1/2));
				h41 = (h - (dv + d2/2));
				a = h41/s;
				b = w4/s;
				fiz41 = (1/(2*M_PI))*(atan(a)-(1/(pow(1+pow(b,2),0.5)))*atan(a/(pow(1+pow(b,2),0.5))));
				
				h42 = dv + d2/2;
				a = h42/s;
				b = w4/s;
				fiz42 = (1/(2*M_PI))*(atan(a)-(1/(pow(1+pow(b,2),0.5)))*atan(a/(pow(1+pow(b,2),0.5))));
				
				fiz4s2 = fiz42 + fiz41;
						
				
			}
			
			if(sit == 3)
			{
				fiz1s3 = 0;
				fiz2s3 = 0;
				fiz3s3 = 0;
				fiz4s3 = 0;
			}
			if(sit == 4)
			{
				fiz1s4 = 0;
				fiz2s4 = 0;
				fiz3s4 = 0;
				fiz4s4 = 0;
			}	
			
			if(sit == 5)
			{
				fiz1s5 = 0;
				fiz2s5 = 0;
				fiz3s5 = 0;
				fiz4s5 = 0;
			}  
			
			
			if(sit == 1)
			{
				fiz1 = fiz1s1;
				fiz2 = fiz2s1;
				fiz3 = fiz3s1;
				fiz4 = fiz4s1;
			}
			if(sit == 2)
			{
				fiz1 = fiz1s2;
				fiz2 = fiz2s2;
				fiz3 = fiz3s2;
				fiz4 = fiz4s2;
			}	
			if(sit == 3)
			{
				fiz1 = fiz1s3;
				fiz2 = fiz2s3;
				fiz3 = fiz3s3;
				fiz4 = fiz4s3;
			}
			if(sit == 4)
			{
				fiz1 = fiz1s4;
				fiz2 = fiz2s4;
				fiz3 = fiz3s4;
				fiz4 = fiz4s4;
			}
			if(sit == 5)
			{
				fiz1 = fiz1s5;
				fiz2 = fiz2s5;
				fiz3 = fiz3s5;
				fiz4 = fiz4s5;
			}
			
			fiz = ((c1*fiz1 + c2*fiz2)*d1+(c3*fiz3 + c4*fiz4)*d2)/((c1+c2)*d1+(c3+c4)*d2);
			ef = 1;
			//Emissividade
			
			lbs1 = z;//corrigido
			lbs2 = 2*h/3;
			lbs3 = lbs1;
			
			lb1s4 = dv + 2*h/3;
			lb2s4 = z - (dv +d2);
			lb3s4 = r- d1/2;
			lb4s4 = w - r - d1/2;
			
			lb1s5 = dv + 2*h/3;
			lb2s5 = 0 ;
			lb3s5 = (r-d1/2)*((z-dv)/d2);
			lb4s5 = (w - r - d1/2)*((z-dv)/d2);
			
			if(sit == 1)
				lb = lbs1;
			if(sit == 2)
				lb = lbs2;
			if(sit == 3)
				lb = lbs3;
				
			ez = 1 - exp(-0.3*lb);
			
			if(sit == 4)
			{
			
				lb1 = lb1s4;
				lb2 = lb2s4;
				lb3 = lb3s4;
				lb4 = lb4s4;
			}
			if(sit == 5)
			{
				lb1 = lb1s5;
				lb2 = lb2s5;
				lb3 = lb3s5;
				lb4 = lb4s5;
			}
				
			ez1 = 1 - exp(-0.3*lb1);
			ez2 = 1 - exp(-0.3*lb2);
			ez3 = 1 - exp(-0.3*lb3);
			ez4 = 1 - exp(-0.3*lb4);
			
			//Absortividade
			
			az1 = 0;
			az2 = 1 - exp(-0.3*h);	
			if(sit ==1 || sit == 2 || sit == 3)
				 az = az1;
			if(sit == 4 || sit == 5)
				az = az2;	
				
			if(dv >= z)
				 ver = 0;
			else
				ver = 1;	
				
			//Tz1 e Tz2
			float df;
			df = 2 * h/3;	
			float lx1;
			float lx2;
			float lx;
			
			
			if(ver == 0)
				 lx1 = (df/2)*pow(2,0.5);
			if(ver == 1)
				lx1 = dv + h/2;
			if(lx1 <= (Q/w))
				lx = lx1;
			else
				lx = Q/w;
			tz1 =  (1- (0.4725*( (lx*w) /Q) ))*(tw - to) + to;
			
			if(ver == 0)
				 lx2 = (df/2)*pow(2,0.5);
			if(ver == 1)
				lx2 = dv + h/2 + d2;
			if(lx2 <= (Q/w))
				lx = lx2;
			else
				lx = Q/w;
			tz2 = (1- (0.4725*( (lx*w) /Q) ))*(tw - to) + to;
			
			tz = (tz1 + tz2)/2;
	  		
				
				
			//Fluxo de calor aberturas
			float sigma = 56.7 * pow(10,(-12));
			if_1 = fif*ef*(1-az)*sigma*(pow(tf+273.15,4));
			if(sit ==1 || sit == 2 || sit == 3)
				iz_1 = fiz*ez*sigma*(pow(tz+273.15,4));
			if(sit == 4)
			{
				iz1 = c1*ez1*sigma*(pow(tw+273.15,4));
				iz2 = c2*ez2*sigma*pow(tz2+273.15,4);
				iz3 = c3*ez3*sigma*((pow(tz1+273.15,4))/2 + (pow(tz2+273.15,4))/2);
				iz4 = c4*ez4*sigma*((pow(tz1+273.15,4))/2 + (pow(tz2+273.15,4))/2);
				
				iz_2 = ((iz1 + iz2)*d1 + (iz3 + iz4)*d2)/(2*(d1+d2));
			}
			if(sit == 5)
			{
				iz1 = c1*ez1*sigma*(pow(tw+273.15,4));
				iz2 = 0;
				iz3 = ((z-dv)/d2)*c3*ez3*sigma*((pow(tz1+273.15,4))/2 + (pow(tz2+273.15,4))/2);
				iz4 = ((z-dv)/d2)*c4*ez4*sigma*((pow(tz1+273.15,4))/2 + (pow(tz2+273.15,4))/2);
				
				iz_3 = ((iz1 + iz2)*d1 + (iz3 + iz4)*d2)/(2*(d1+d2));
			}
			
			if(sit ==1 || sit == 2 || sit == 3)
				 iz = iz_1;
			if(sit == 4)
				iz = iz_2;
			if(sit == 5)
				iz = iz_3;
			
			//Temperatura do aço
			ac =  0.01;
	  		a = sigma;
	  		b= 273.15;
	  		c = ac ;
	  		D = 273.15;

	  		
	  		if(ver == 0)	  			
	  			e = iz + if_1 + 293 * ac;
	  		if(ver == 1)
	  			e = iz + if_1 + (tz+273.15) * ac;
	  		
			x1 = 0.001;
			i= 0;
			erro = 1;
			float Ta;
			while(erro >= 0.01)
			{
				float x_1 = x1;
				float f = (a*pow(x_1,4) + 4*a*b*pow(x_1,3)) + (6*a*(pow(b,2))*pow(x_1,2)) + (4*a*pow(b,3)+c)*x_1 + (a*pow(b,4) +c*D-e);
				float fl =(4*a*pow(x_1,3) )+ (12*a*b*pow(x_1,2) )+ (12*a*(pow(b,2))*x_1) + (4*a*pow(b,3)+c);
				
				x1 = x_1 - (f/fl);
				float teste5 = (x1-x_1)/x_1;
				erro = fabs(teste5);
				i = i + 1;
				printf("Erro:%f\ti=%d\tf:%f\tfl:%f\tx1:%f\n",erro,i,f,fl,x1);
				Ta = x1;
				
			}
			
	  		
	  		// A funcao 'fprintf' devolve o número de bytes gravados 
			// ou EOF se houve erro na gravação
		 	result = fprintf(arq,"Dv=%f\tD=%f\tSit=%i\tTemperatura = %f \n",dv,d,sit,Ta);  
//			result1 = fprintf(arq1,"Dv=%f ; D=%f \tfif11d : %f \tfif12t : %f\tfif3t : %f\n",dv,d,fif11d,fif12t,fif3t); 					  
		  	if (result == EOF)		    
			   printf("Erro na Gravacao\n");
			dv += 0.001;
  		}
  		d += 0.1;
  	}
	
 	  
    fclose(arq);
}
