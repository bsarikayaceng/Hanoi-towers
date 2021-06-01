#include<stdio.h>
#include<ctype.h>
int main()
{
int ilk,iki,uc,dort,bes,alti,yedi,z,t,y,i=0;
char a;
while(i>=7);{
	printf("Hanoi Kuleleri oyunu A cubugundaki buyukten kucuge dizilmis diskleri,\nyine ayni sekilde C cubuguna sirasini koruyarak tasiyinca kazanacaginiz bir oyundur.\n");
	printf("Kurallar\n1) Kucuk diski buyuk diskin uzerine koyabilirsiniz sadece kucuk diskin uzerine buyuk disk koyamazsiniz.\n En kucuk disk:\n 1 -\n En buyuk disk:\n 3 --- \n numarali disktir.\n");
	printf("2) Son hamlenizi tekrar edemezsiniz.\n");
	printf("3) Yalnizca en ustteki diski tasiyabilirsiniz.\n");
	printf("4) Hamle sayisi 2^n-1 seklinde hesaplanir. Yani 3 disk icin 7 hamle hakkiniz bulunmaktadir.\n\n\n");
    printf("ilk durumda\n\nA cubugundakiler\t\t\tB cubugu\t\t\tC cubugu\n1   -\n2  --\n3 ---\n\n\n");
    printf("Tasimak istediginiz diski girin\n");
scanf("%d",&ilk);
if ( ilk==1){
	printf("Diski nereye tasimak istersiniz?\n");
	scanf("%s",&a);
	z = ("%c=%d",a,a);
	if(z==65){
		printf("Disk zaten bu cubukta. Tekrar deneyin\n");
	}
	if (z==66) //ilk çubuktaki küçük disk Bye taþýma
	{ 
	printf("Yeni durumda:\nA cubugundakiler\t\tB cubugu\t\tC cubugu\n\n2  --\t\t\t\t1  -\n3 ---\n");
	i++;
	printf("Tasimak istediginiz diski girin:\n");
	scanf("%d",&iki);
	    if ( iki==1){
		printf("Son oynattiginiz diski tekrar oynatamazsiniz. Tekrar deneyin.\n");
		}
    
    	else if(iki==2){ 
		printf("Diski nereye tasimak istersiniz?\n");
		scanf("%s",&a);
		y = ("%c=%d",a,a);
		if(y==65){
			printf("Disk zaten bu cubukta. Tekrar deneyin\n");
		}
		if (y==66){ //2.diski Bye tasima
			printf("Kucuk diskin uzerine buyuk disk koyamazsiniz tekrar deneyin\n");
 		}
 		else if(y==67){ //2.diski c ye tasýma 
			printf("Yeni durumda:\nA cubugundakiler\t\tB cubugu\t\tC cubugu\n\n3 ---\t\t\t\t1  -\t\t\t2  --\n");
			i++;
			printf("Tasimak istediginiz diski girin:\n");
	        scanf("%d",&uc);
	        if(uc==3){
	        	printf("Kucuk diskin uzerine buyuk disk koyamazsiniz. Tekrar deneyin.\n");
			}
			if(uc==2){
				printf("Son oynattiginiz diski tekrar oynatamazsiniz. Tekrar deneyin.\n");
			}
			if(uc==1){
				printf("Diski nereye tasimak istersiniz?\n");
            	scanf("%s",&a);
            	z = ("%c=%d",a,a);
            	if(z==65){
            		printf("Yeni durumda:\nA cubugundakiler\t\tB cubugu\t\tC cubugu\n\n1  -\t\t\t\t\t\t\t2  --\n3 ---\n");
            		i++;
            		printf("Tasimak istediginiz diski girin:\n");
	                scanf("%d",&dort);
	                if(dort==3){
	                	printf("Yalnýzca en ustteki diski tasiyabilirsiniz. Tekrar deneyin.\n");
	                }
	                if(dort==1){
	                	printf("Son oynattiginiz diski tekrar oynatamazsiniz.Tekrar deneyin.\n");
					}
					if(dort==2){
					 	printf("Diski nereye tasimak istersiniz?\n");
                     	scanf("%s",&a);
                     	z = ("%c=%d",a,a);
                     	if(z==65){
                     		printf("Kucuk diskin uzerine buyuk disk koyamazsiniz. Tekrar deneyin.\n");
						 }
						 if(z==67){
						 	printf("Disk zaten bu cubukta. Tekrar deneyin.\n");
						 }
						 if(z==66){
						 	printf("Yeni durumda:\nA cubugundakiler\t\tB cubugu\t\tC cubugu\n\n1  -\t\t\t\t2  --\n3 ---\n");
						 	i++;
						 	//unutma burdan devam
						 	printf("Tasimak istediginiz diski girin:\n");
	                        scanf("%d",&bes);
	                        if(bes==3){
	                        	printf("Yalnýzca en ustteki diski tasiyabilirsiniz. Tekrar deneyin.\n");
							}
							if(bes==2){
						        printf("Son oynattiginiz diski tekrar oynatamazsiniz.Tekrar deneyin.\n");
							}
						 	if(bes==1){
						 		printf("Diski nereye tasimak istersiniz?\n");
                            	scanf("%s",&a);
                         	    y = ("%c=%d",a,a);
                         	    if(y==65){
                         	    	printf("Disk zaten bu cubukta. Tekrar deneyin.\n");
                         	    if(y==66){
                         	    	printf("Yeni durumda:\nA cubugundakiler\t\tB cubugu\t\tC cubugu\n\n1  -\n3 ---\t\t\t\t\t\t\t2  --\n");
                         	    	i++;
                         	    	printf("Tasimak istediginiz diski girin:\n");
	                                scanf("%d",&alti);
	                                if(alti==1){
	                                	printf("Son oynattiginiz diski tekrar oynatamazsiniz.Tekrar deneyin.\n");
									}
									if(alti==2){
										printf("Yalnýzca en ustteki diski tasiyabilirsiniz. Tekrar deneyin.\n");
									}
                         	    	if(alti==3){
                         	    		printf("Diski nereye tasimak istersiniz?\n");
                                     	scanf("%s",&a);
                         	            y = ("%c=%d",a,a);
                         	            if(y==65){
                         	            	printf("Disk zaten bu cubukta. Tekrar deneyin.\n");
										 }
										 if(y==66){
										 	printf("Kucuk diskin uzerine buyuk disk koyamazsiniz. Tekrar deneyin.\n");
										 }
										 if(y==67){
										 	printf("Yeni durumda:\nA cubugundakiler\t\tB cubugu\t\tC cubugu\n\n\t\t\t\t1  -\n\t\t\t\t2  --\t\t\t3 ---\n");
										 	i++;
										 }
									 }
								 }
								 }
								 if(z==67){
								 	printf("Yeni durumda:\nA cubugundakiler\t\tB cubugu\t\tC cubugu\n\n3 ---\t\t\t\t2  --\t\t\t1  -\n");
								 	i++;
								 	
								 }
							 }
						 }
					}
				}
			}
 		}
      	}
    	else if(iki==3){ //3.diski tasýmak izin yok üstte 2.disk var
		printf("Yalnýzca en ustteki diski tasiyabilirsiniz. Tekrar deneyin.\n");
	}
    }
	}
	if (z==67) //1.diski C cubuðuna tasima
	{
		printf("Yeni durumda:\nA cubugundakiler\t\tB cubugu\t\tC cubugu\n\n2  --\t\t\t\t\t\t\t1  -\n3 ---\n");
		i++;
		printf("Tasimak istediginiz diski girin:\n");
	    scanf("%d",&iki);
 	    if ( iki==1){
		printf("Son oynattiginiz diski tekrar oynatamazsiniz.Tekrar deneyin.\n");
		}
     	if ( iki==2){
		printf("Diski nereye tasimak istersiniz?\n");
    	scanf("%s",&a);
    	z = ("%c=%d",a,a);
    	if (z==66){ //2.diski bye tasima
    		printf("Yeni durumda:\nA cubugundakiler\t\tB cubugu\t\tC cubugu\n\n3 ---\t\t\t\t2  --\t\t\t1  -\n");
			i++;
			printf("Tasimak istediginiz diski girin:\n");
			scanf("%d",&uc);
			if(uc==1){
				printf("Diski nereye tasimak istersiniz?\n");
   			 	scanf("%s",&a);
    			z = ("%c=%d",a,a);
    			if(z==65){
    				printf("Yeni durumda:\nA cubugundakiler\t\tB cubugu\t\tC cubugu\n\n1  -\n3 ---\t\t\t\t2  --\t\t\t\n"); //1.diski aya tasima
					i++;
					printf("Tasimak istediginiz diski girin:\n");
	                scanf("%d",&dort);
 	   				 if (dort==1){
 	   				 	printf("Son oynattiginiz diski tekrar oynatamazsiniz.Tekrar deneyin.\n");
						 }
					if(dort==3){
							printf("Yalnizca en ustteki diski tasiyabilirsiniz. Tekrar deneyin\n");
					}
					if(dort==2){
						printf("Diski nereye tasimak istersiniz?\n");
   					 	scanf("%s",&a);
    					t = ("%c=%d",a,a);
    					if(t==65){
    						printf("Kucuk diskin uzerine buyuk disk koyamazsiniz. Tekrar deneyin.\n");
						}
						if(t==66){
							printf("Disk zaten bu cubukta. Tekrar deneyin\n");
						}
						if(t==67){
						printf("Yeni durumda:\nA cubugundakiler\t\tB cubugu\t\tC cubugu\n\n1  -\n3 ---\t\t\t\t\t\t\t2  --\n");
						i++;	
						printf("Tasimak istediginiz diski girin:\n");
	                    scanf("%d",&bes);
 	   				    if (bes==1){
 	   				    	printf("Diski nereye tasimak istersiniz?\n");
   					     	scanf("%s",&a);
    				    	t = ("%c=%d",a,a);
    				    	if(t==65){
    				    		printf("Disk zaten bu cubukta. Tekrar deneyin\n");
							}
							if(t==66){
								printf("Yeni durumda:\nA cubugundakiler\t\tB cubugu\t\tC cubugu\n\n3 ---\t\t\t\t1  -\t\t\t2  --\n");
								i++;
								printf("Tasimak istediginiz diski girin:\n");
	                  			scanf("%d",&alti);
	                  			if(alti==1){
	                  				printf("Son oynattiginiz diski tekrar oynatamazsiniz.Tekrar deneyin.\n");
								  }
								  if(alti==2){
								  	printf("Diski nereye tasimak istersiniz?\n");
   					            	scanf("%s",&a);
    				            	t = ("%c=%d",a,a);
    				            	if(t==66){
    				            		printf("Kucuk diskin uzerine buyuk disk koyamazsiniz. Tekrar deneyin.\n");
									}
									if(t==67){
										printf("Disk zaten bu cubukta. Tekrar deneyin\n");
									}
									if(t==65){
										printf("Yeni durumda:\nA cubugundakiler\t\tB cubugu\t\tC cubugu\n\n2  --\n3 ---\t\t\t\t1  -\n");
										i++;
										printf("Tasimak istediginiz diski girin:\n");
	                  		        	scanf("%d",&yedi);
	                  		        	if(yedi==2){
	                  		        		printf("Son oynattiginiz diski tekrar oynatamazsiniz.Tekrar deneyin.\n");
										  }
										  if(yedi==3){
										  	printf("Yalnizca en ustteki diski tasiyabilirsiniz. Tekrar deneyin\n");
										  }
										  if(yedi==1){
										  	printf("Diski nereye tasimak istersiniz?\n");
   					                    	scanf("%s",&a);
    				                    	t = ("%c=%d",a,a);
    				                    	if(t==65){
    				                    		printf("Yeni durumda\n\nA cubugundakiler\t\t\tB cubugu\t\t\tC cubugu\n1   -\n2  --\n3 ---\n\n\n");
    				                    		i++;
											}
											if(t==66){
												printf("Disk zaten bu cubukta. Tekrar deneyin\n");
											}
											if(t==67){
												printf("Yeni durumda:\nA cubugundakiler\t\tB cubugu\t\tC cubugu\n\n2  --\n3 ---\t\t\t\t\t\t\t1  -\n");
												i++;
											}
										  }
									}
								  }
								  if(alti==3){
								  	printf("Kucuk diskin uzerine buyuk disk koyamazsiniz. Tekrar deneyin.\n");
								  }
							}
							}
						}
						//devam
					}
				}
				if (z==66){
					printf("Yeni durumda:\nA cubugundakiler\t\tB cubugu\t\tC cubugu\n\n3 ---\t\t\t\t1  -\n\t\t\t\t2  --\n");
					i++;
					printf("Tasimak istediginiz diski girin:\n");
		        	scanf("%d",&dort);
		        	if(dort==3){
			    	printf("Diski nereye tasimak istersiniz?\n");
   			    	scanf("%s",&a);
    		    	t = ("%c=%d",a,a);
    		    	if(t==67){
    		    		printf("Yeni durumda:\nA cubugundakiler\t\tB cubugu\t\tC cubugu\n\n\t\t\t\t1  -\n\t\t\t\t2  --\t\t\t3 ---\n");
    		    		i++;
    		    		printf("Tasimak istediginiz diski girin:\n");
		            	scanf("%d",&bes);
		            	if(bes==1){
			        	printf("Diski nereye tasimak istersiniz?\n");
   			        	scanf("%s",&a);
    		        	t = ("%c=%d",a,a);
    		        	if(t==65){
    		        		printf("Yeni durumda:\nA cubugundakiler\t\tB cubugu\t\tC cubugu\n\n1  -\t\t\t\t2  --\t\t\t3 ---\n");
    		        		i++;
    		        		printf("Tasimak istediginiz diski girin:\n");
		                	scanf("%d",&alti);
		                	if(alti==2);{
							printf("Diski nereye tasimak istersiniz?\n");
   			            	scanf("%s",&a);
    		            	t = ("%c=%d",a,a);
    		            	if(t==67){
    		            		printf("Yeni durumda:\nA cubugundakiler\t\tB cubugu\t\tC cubugu\n\n1  -\t\t\t\t\t\t\t2  --\n\t\t\t\t\t\t\t3 ---\n");
    		            		i++;
    		            		printf("Tasimak istediginiz diski girin:\n");
		                    	scanf("%d",&yedi);
		                    	if(yedi==1){
		                    		printf("Diski nereye tasimak istersiniz?\n");
   			                    	scanf("%s",&a);
    		                    	t = ("%c=%d",a,a);
    		                    	if(t==67){
    		                    	printf("Yeni durumda:\nA cubugundakiler\t\tB cubugu\t\tC cubugu\n\n\t\t\t\t\t\t\t1  -\n\t\t\t\t\t\t\t2  --\n\t\t\t\t\t\t\t3 ---\n");
    		            	     	i++;	
    		            	     	printf("Oyunu kazandiniz.Tebrikler.\a\n");
									}
								}
		                    	}
		                    	}
		                    	{
							
							}
							}
		                	
						}
    		        }
					}
			        }
					}
			}
			if(uc==2){
				printf("Son oynattiginiz diski tekrar oynatamazsiniz.Tekrar deneyin.\n");
			}
			if(uc==3){
				printf("Kucuk diskin uzerine buyuk disk koyamazsiniz. Tekrar deneyin.\n");
			}
		}
		if (z==67){
			printf("Kucuk diskin uzerine buyuk disk koyamazsiniz. Tekrar deneyin.\n");
		}
	}	
else if (ilk==2)
{
	printf("Yalnizca en ustteki diski tasiyabilirsiniz. Tekrar deneyin\n");

}
else if (ilk==3)
{
	printf("Yalnizca en ustteki diski tasiyabilirsiniz. Tekrar deneyin\n");

}
else if (ilk>3)
{
	printf("Boyle bir disk bulunmuyor. Lutfen gecerli verileri giriniz.\nDiskler icin 1 2 3\nCubuklar icin A B C \nverilerini kullanin.\n");
}
else if(z!=65||z!=66||z!=67)
{
	printf("Boyle bir cubuk bulunmuyor. Lutfen gecerli verileri giriniz.\nDiskler icin 1 2 3\nCubuklar icin A B C \nverilerini kullanin.\n");
}
printf("hamle sayiniz:%d\n",i);
printf("hamle hakkiniz=7\n");
if(i>=7){
	printf("Hamle hakkiniz bitti.\n");
}
}
}
