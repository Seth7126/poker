// ============================================================
// 函数名称: sub_4a3cb0
// 虚拟地址: 0x4a3cb0
// WARP GUID: 1f07cff4-01a9-5177-9db4-c7e749260344
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49adb4, sub_4a3f34, sub_4a3f5c, sub_4a3f84
// [被调用的父级函数]: sub_4aae48
// ============================================================

int32_t __convention("regparm")sub_4a3cb0(void* arg1)
{
    // 第一条实际指令: sub_4a3f84(arg1, 1)
    sub_4a3f84(arg1, 1)
    int32_t eax_4 = (*(**data_5308e0 + 0x10))(arg1 + 0x1c)
    int32_t var_10 = 0x2714
    int32_t var_c = 0x2736
    char result = sub_49adb4(&var_10, eax_4, *data_5308e0, 1) ^ 1
    
    if (result != 0)
        *(arg1 + 0xc) = eax_4
        *(arg1 + 0x10) = 1
        sub_4a3f34(arg1)
        sub_4a3f5c(arg1)
    
    return result
}
