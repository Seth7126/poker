// ============================================================
// 函数名称: sub_40ae90
// 虚拟地址: 0x40ae90
// WARP GUID: 6bacdee8-6144-52cd-ae09-7adba9d0c908
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403fb0
// [被调用的父级函数]: sub_40af44
// ============================================================

int32_t __stdcallsub_40ae90(char* arg1)
{
    // 第一条实际指令: int32_t ebx = 1
    int32_t ebx = 1
    
    while (true)
        if (*((ebx << 2) + &data_5315bc) == 0)
            int32_t ecx
            sub_403fb0(ecx, arg1)
            return 1
        
        if (ebx == 7)
            break
        
        ebx += 1
    
    return 0
}
