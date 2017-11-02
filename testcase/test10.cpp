int main(void)
{
  int a, b, loop, pointa, pointb;
  pointa=0;
  pointb=0;

  for(loop=1;loop<=10;loop++){

      scanf("%d %d",&a,&b);
      if(a>=1&&a<=3&&b>=1&&b<=3){
          switch(a){
            case 1:

            break;
            case 2:

            break;
            case 3:

            break;
          }


          switch(b){
            case 1:

            break;
            case 2:

            break;
            case 3:

            break;
            }


        if(a==1&&b==1||a==2&&b==2||a==3&&b==3){


        }
        if(a==1&&b==2){

            pointa=pointa+1;
        }
        if(a==2&&b==3){

            pointa=pointa+2;
        }
        if(a==3&&b==1){

            pointa=pointa+5;
        }

        if(a==2&&b==1){

            pointb=pointb+1;
        }
        if(a==3&&b==2){

            pointb=pointb+2;
        }
        if(a==1&&b==3){

            pointb=pointb+5;
        }

              }
      else{

        loop=loop-1;
      }

    if(pointa>=22||pointb>=22){
      break;
    }
   }


    if(pointa>pointb){
      printf("Winner: A (points: A %d, B %d)",pointa,pointb);
    }
    if(pointb>pointa){
      printf("Winner: B (points: A %d, B %d)",pointa,pointb);
    }



  return(0);
}
