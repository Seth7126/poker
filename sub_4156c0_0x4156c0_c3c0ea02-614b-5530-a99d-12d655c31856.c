// ============================================================
// 函数名称: sub_4156c0
// 虚拟地址: 0x4156c0
// WARP GUID: c3c0ea02-614b-5530-a99d-12d655c31856
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032dc, sub_40fc2c, sub_40faf0
// [被调用的父级函数]: sub_413e68, sub_413cb8
// ============================================================

int32_t* __convention("regparm")sub_4156c0(void* arg1, void* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* result = arg3
    int32_t* result = arg3
    *(arg1 + 0x18)
    int32_t* result_1
    int32_t ecx
    result_1, ecx = sub_40fc2c(arg3, arg2)
    result = result_1
    
    if (result == 0 && *(arg1 + 0x1c) != 0 && *(arg1 + 0x1c) != *(arg1 + 0x18))
        *(arg1 + 0x1c)
        result = sub_40fc2c(ecx, arg2)
    
    if (*(arg1 + 0x62) != 0)
        *(arg1 + 0x64)
        (*(arg1 + 0x60))(&result)
    
    if (result != 0 && sub_4032dc(result, &data_40f80c) != 0)
        return result
    
    sub_40faf0(arg2)
    noreturn
}
