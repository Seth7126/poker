// ============================================================
// 函数名称: sub_4a3fb8
// 虚拟地址: 0x4a3fb8
// WARP GUID: c9e300c3-cd3f-5099-860a-71c1d7a50106
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49adb4, sub_4a3f34
// [被调用的父级函数]: sub_4a4010, sub_4a3b70
// ============================================================

int32_t __convention("regparm")sub_4a3fb8(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    *(arg1 + 0xc)
    int32_t eax_4 = (*(**data_5308e0 + 0x14))(*(arg1 + 0x1c), *(arg1 + 0x14))
    var_8 = 0x2740
    int32_t result
    result.b = sub_49adb4(&var_8, eax_4, *data_5308e0, 0).b ^ 1
    
    if (result.b != 0)
        sub_4a3f34(arg1)
    
    return result
}
