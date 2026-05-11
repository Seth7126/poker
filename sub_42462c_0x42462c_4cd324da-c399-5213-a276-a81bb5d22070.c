// ============================================================
// 函数名称: sub_42462c
// 虚拟地址: 0x42462c
// WARP GUID: 4cd324da-c399-5213-a276-a81bb5d22070
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: IsWindow
// [内部子函数调用]: sub_42f448
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_42462c(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (*arg2 == 7 && *data_530a60 == 1 && IsWindow(arg2[1]) == 0)
    if (*arg2 == 7 && *data_530a60 == 1 && IsWindow(arg2[1]) == 0)
        arg2[1] = 0
    
    return sub_42f448(arg1, arg2)
}
