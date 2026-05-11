// ============================================================
// 函数名称: sub_46180c
// 虚拟地址: 0x46180c
// WARP GUID: 88af32f2-0508-54e2-9189-55633a319170
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_461314, sub_461334, sub_4612e4
// [被调用的父级函数]: sub_461a84
// ============================================================

void __thiscallsub_46180c(char* arg1, int32_t* arg2 @ eax, int32_t arg3)
{
    // 第一条实际指令: char* ebx = arg1
    char* ebx = arg1
    int32_t esi = arg3
    
    if (esi u> 0xfffd)
        return 
    
    char edx
    sub_461314(arg2, edx)
    sub_461334(arg2, esi + 2)
    
    while (true)
        int32_t edx_3 = esi
        esi -= 1
        
        if (edx_3 == 0)
            break
        
        sub_4612e4(arg2, *ebx)
        ebx = &ebx[1]
}
