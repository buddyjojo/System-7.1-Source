     ?  ?   ?y manager routines	by Cary ClarMemMgrInternal.cm   TEXTMPS   TEXTMPS ????                  ?[? ?  ?gor, Oliver Steele, David Van Brink, Chris Yerga	Copyright 1987 - 1991 Apple Computer, Inc.  All rights reserved.	*/#include "c   6    { < ???  blockHeader   ??? ?а  blockHeader   
  Y?a       z    z?P ??  curHeap "  Zye ???  curHeap->totalFree  *  Zye ???  curHeap->totalPurgableSpace   YA^ ???  curHeap   
  ??V           D?? ???  blockHeader  R    ,?, c??  THEZONE   ,?, c??  	endSlide    .o9      	currFree    .o9      workTrailSize   *<      workTrailer   ,?,      workTrailSize   .o9      workTrailSize   ,?, c?\  curHeap   -/ c?L  doExtraSlide    3U c?<  	workBlock   5wb c?,  cumFreeSize   6?p c?  	nextFree    6?p c?  chunkStart    6?p c?  chunkStart  ,  6?p c?  (Ptr)chunkStart - cumFreeSize @  6?p c?  1(Ptr)endSlide - (Ptr)chunkStart + endSlide->size    80w c?  	workBlock   80w      newFreeBlock   ?? c?  	workBlock B :	 c?  3(char*)blockHeader + kBlockHeaderSize + mpBlockSize 0 :	 c?  !(char*)boundaryPtr + mpBlockSize   aV
K cp  curHeap  d(
V c`  	growSize  " d(
V cP  newSpaceAbove->size   d(
V c@  kMinFreeSplitSize  d(
V c0  kMinBlockSize   d(
V c   kMinFreeBlockSize  d(
V c  curHeap   
 ? ?       d  ???? gJ  	sizeWeGot *????" gJ  curHeap->fSkipPurgeBeforeGZ  ????"      calledGZProcOnce    H 	Monaco t 1 L? Apple Computer, In   ) U ) U?lr,   ?  +         ) U ) U                 ??V????20         ?r?F?r?F?7 ??    +SuperMarioProj?OS?MemoryMgr?FigmentSources? Chris Petersen 26 MemMgrInternal.c "Updated using UpdateProjectSources         ?  ?   ? ?    ? MPSR  "DTVU  :BKPT  vckid   ????  ?    ???      ,V??        ???   H    @??   ?    z???   ?    5I??  X    CS??   :    q???   ?    ???  J     ?    . ?G?	Projector