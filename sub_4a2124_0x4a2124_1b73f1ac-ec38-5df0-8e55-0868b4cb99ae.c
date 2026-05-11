// ============================================================
// 函数名称: sub_4a2124
// 虚拟地址: 0x4a2124
// WARP GUID: 1b73f1ac-ec38-5df0-8e55-0868b4cb99ae
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410c00, sub_403e4c, sub_403248, sub_403260
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a2124(void** arg1, int32_t* arg2)
{
    // 第一条实际指令: if (sub_403248(arg2, sub_4a130e+0xae) == 0)
    if (sub_403248(arg2, sub_4a130e+0xae) == 0)
        sub_410c00(arg1, arg2)
        noreturn
    
    sub_403260(arg2, sub_4a130e+0xae)
    sub_403e4c(&arg2[2], arg1[2])
    arg2[3] = arg1[3]
    sub_403e4c(&arg2[4], arg1[4])
    sub_403e4c(&arg2[5], arg1[5])
    char result = arg1[6].b
    arg2[6].b = result
    return result
}
