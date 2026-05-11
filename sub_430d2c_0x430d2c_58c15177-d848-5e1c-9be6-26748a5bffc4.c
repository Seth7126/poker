// ============================================================
// 函数名称: sub_430d2c
// 虚拟地址: 0x430d2c
// WARP GUID: 58c15177-d848-5e1c-9be6-26748a5bffc4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: LoadKeyboardLayoutA
// [内部子函数调用]: sub_42bd90, sub_4032ac, sub_40423c
// [被调用的父级函数]: sub_424720
// ============================================================

int32_t __convention("regparm")sub_430d2c(int32_t* arg1)
{
    // 第一条实际指令: if (*(data_530a80 + 9) != 0)
    if (*(data_530a80 + 9) != 0)
        if (sub_42bd90(arg1) == 0)
            if (*(*data_530660 + 0x30) != 0)
                LoadKeyboardLayoutA(sub_40423c(*(*data_530660 + 0x30)), KLF_ACTIVATE)
        else if (*(*data_530660 + 0x2c) != 0)
            LoadKeyboardLayoutA(sub_40423c(*(*data_530660 + 0x2c)), KLF_ACTIVATE)
    
    int32_t* ebx
    ebx.w = 0xffc9
    return sub_4032ac(arg1)
}
