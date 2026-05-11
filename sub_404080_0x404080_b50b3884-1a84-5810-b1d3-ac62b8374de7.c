// ============================================================
// 函数名称: sub_404080
// 虚拟地址: 0x404080
// WARP GUID: b50b3884-1a84-5810-b1d3-ac62b8374de7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402980, sub_4043ac, sub_403e4c
// [被调用的父级函数]: sub_5127fc, sub_4d4f84, sub_49e7f3, sub_4acc64, sub_423918, sub_49ee10, sub_51d764, sub_51038c, sub_50abec, sub_508414, sub_4e649b, sub_5223e8, sub_4ae168, sub_4a1dbb, sub_475d3c, sub_508998, sub_47be18, sub_497bcc, sub_50f39c, sub_520efc, sub_4acc5b, sub_434a1c, sub_50a240, sub_51300c, sub_49cfe0, sub_4dad04, sub_528e4c, sub_477c08, sub_4c62e8, sub_4ec448, sub_52b8e8, sub_48c290, sub_497fb4, sub_40c688, sub_404464, sub_507860, sub_4acba4, sub_449678, sub_5207dc, sub_4683f7, sub_4807f4, sub_477bff, sub_4cda5c, sub_49e7fc, sub_49fdd0, sub_4a4140, sub_4dbf70, sub_47a2ac, sub_47a46c, sub_46f5a0, sub_4a6faf, sub_4d5577, sub_51974c, sub_4ecd3c, sub_46abfc, sub_528e43, sub_43a0a4, sub_529818, sub_4e6659, sub_4040c4, sub_4b9e84, sub_439258, sub_4ec76c, sub_4c27e4, sub_40bfe4, sub_40aff4, sub_4a4084, sub_4bdac0, sub_48e9e4, sub_47a5fc, sub_46fed4, sub_4c39c8, sub_4e6028, sub_52ba68, sub_4d88f8, sub_52b40c, sub_4689cc, sub_528b98, sub_4c8aa0, sub_50c5e0, sub_520a94, sub_4691b4, sub_511670, sub_468d90, sub_4d8208, sub_46f000, sub_4b8c38
// ============================================================

void __convention("regparm")sub_404080(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        return 
    
    void* ecx = *arg1
    
    if (ecx == 0)
        return sub_403e4c(arg1, arg2) __tailcall
    
    int32_t edi = *(ecx - 4)
    int32_t edx_2 = *(arg2 - 4) + edi
    char* eax_1
    int32_t ecx_2
    
    if (arg2 == ecx)
        sub_4043ac(arg1, edx_2)
        eax_1 = *arg1
        ecx_2 = edi
    else
        sub_4043ac(arg1, edx_2)
        eax_1 = arg2
        ecx_2 = *(arg2 - 4)
    
    sub_402980(eax_1, *arg1 + edi, ecx_2)
}
