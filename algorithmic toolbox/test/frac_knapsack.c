#include <stdio.h>

int main()
{
	int n, w, i, j;
	scanf("%d %d",&n,&w);

	int weight[n] , value[n];
	for(i=0;i<n;i++)
		scanf("%d %d",&value[i], &weight[i]);
	
	double item[n],a,b;

	//profit array
	for(i=0;i<n;i++)
		item[i] = (double)value[i] / weight[i];

	//sorting the weight array and (profit array named item)
	for (i = 0; i < n; i++) 
    {
 
            for (j = i + 1; j < n; j++)
            {
 
                if (item[i] < item[j]) 
                {
 
                    a =  item[i];
                    item[i] = item[j];
                    item[j] = a;

                    b = weight[i];
                    weight[i] = weight[j];
                    weight[j] = b;
 
                }
 
            }
 
    }
    //applying knapsack
    int cur_weight =0, remain = 0;
    double final_value = 0.0;

    for(i=0;i<n;i++)
    {
    	if(cur_weight + weight[i] < w)
    	{
    		cur_weight = cur_weight + weight[i];
    		final_value = final_value + ((double)item[i] * weight[i]);
    	}

    	else
    	{
    		remain = w - cur_weight;
    		final_value = final_value + ((double)remain*item[i]);
    		break;
    	}
    }


    printf("%.4lf\n",final_value );



}