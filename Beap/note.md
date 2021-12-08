# left ， right， parent node

1. may connect to level , because level 1 = 1 , level 2 = 2 , level 3 = 3 ....

#

1. tree is not relevent to the heap, the picture on book is just explain heap more easily.
   a. which comfirm that we should start from heap not tree structure.

   b. heap.size and length are more understandable

# Questions

1. will it run more faster than 2 in memory, because binary have its advantage
2. heap is bascially slower than both, on search and insert.
3. how to find the current level(depth), should start from cantor decode.

# how to do (base on eassy.)

1. a heap contain N
   depth = (2\*N)^(1/2)

2. i = curent level , i elements in this level
   start = (i*(i-1)/2+1)
   end = (i*(i+1)/2)
   left_parent = index - i -1
   right_parent = index -i
   (when index = start or end , parent +1 , some node will ignored)

3. insertion :
   A. location (N+1)
   B. if - smaller than parents
   -> interchange() with larger parent
   -stop unitl- parents(both)< it

# Cantor - pairing

1. cantor pairing
   https://www.vertexfragment.com/ramblings/cantor-szudzik-pairing-functions/
2. decode and encode in c++
   https://github.com/darkartcode/Cantor-pairing-function/blob/master/cantor.cpp

index = (0.5 _ (x + y) _ (x + y + 1)) + y;
basically the index is i th in blocks, (x,y) is cordinate in that grid.


Decoding formula :
	w = floor(((sqrt((z*8)+1))-1)/2)
	t = (w*(w+1))/2
	k2 = z - t
	k1 = w - k2

1. don't understand how this function come out