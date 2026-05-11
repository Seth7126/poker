// ============================================================
// 函数名称: sub_40148c
// 虚拟地址: 0x40148c
// WARP GUID: b2d15fdf-adf2-53fb-b530-89e71f6e8d62
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_401434
// [被调用的父级函数]: sub_4015d8, sub_4014d4, sub_401548, sub_40163c
// ============================================================

int32_t* __convention("regparm")sub_40148c(int32_t** arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* result = sub_401434()
    int32_t* result = sub_401434()
    
    if (result == 0)
        return 0
    
    result[2] = *arg2
    result[3] = arg2[1]
    int32_t* edx_2 = *arg1
    *result = edx_2
    result[1] = arg1
    edx_2[1] = result
    *arg1 = result
    result.b = 1
    return result
}
