// ============================================================
// 函数名称: sub_4335b8
// 虚拟地址: 0x4335b8
// WARP GUID: 35711451-d65a-5f77-b3a6-89f4f4ea7983
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40b56c, sub_403e4c, sub_403828, sub_403df8
// [被调用的父级函数]: sub_434e00
// ============================================================

int32_t* __convention("regparm")sub_4335b8(void* arg1, char** arg2)
{
    // 第一条实际指令: int32_t* result = arg2
    int32_t* result = arg2
    sub_403df8(result)
    void* edi = *(arg1 + 4)
    
    if (edi == 0)
        return result
    
    if (*(edi + 8) != 0)
        return sub_403e4c(arg2, *(*(arg1 + 4) + 8))
    
    int32_t edx
    edx.b = 1
    sub_40b56c(0x407d24, edx, data_530468)
    sub_403828()
    noreturn
}
