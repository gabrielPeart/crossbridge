; RUN: llc -mtriple=i386-apple-darwin < %s | not grep memset
; PR6767

define void @t() nounwind ssp {
entry:
  %buf = alloca [512 x i8], align 1
  %ptr = getelementptr inbounds [512 x i8]* %buf, i32 0, i32 0
  call void @llvm.memset.i32(i8* %ptr, i8 undef, i32 512, i32 1)
  unreachable
}

declare void @llvm.memset.i32(i8* nocapture, i8, i32, i32) nounwind
