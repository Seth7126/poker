// ============================================================
// 函数名称: sub_47a7ec
// 虚拟地址: 0x47a7ec
// WARP GUID: a59eebdd-89f6-52f7-a900-a9da85aa6229
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47a2ac, sub_403e4c
// [被调用的父级函数]: sub_4e6659, sub_4692db, sub_50fa27, sub_50971c, sub_50b624, sub_509ed4, sub_50732c, sub_52452c, sub_484e24, sub_477c08, sub_4692e4, sub_477bff, sub_509890, sub_488509, sub_50f7b8, sub_4dc3b8, sub_46e24c, sub_4e649b
// ============================================================

void* __thiscallsub_47a7ec(int32_t arg1, int32_t* arg2, char arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = arg1
    int32_t ebx
    int32_t var_c = ebx
    void* eax
    int32_t edx
    void* result = sub_47a2ac(eax, edx, arg1, arg2)
    
    if (arg3 != 0 && *arg2 == 0)
        return sub_403e4c(arg2, U"0")
    
    return result
}
