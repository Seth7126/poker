// ============================================================
// 函数名称: sub_43b9bc
// 虚拟地址: 0x43b9bc
// WARP GUID: 197ad71c-5d16-583f-b94e-b9ed6f859e75
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4399ac, sub_43bf0c
// ============================================================

void __convention("regparm")sub_43b9bc(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 == arg1[0xd])
    if (arg2 == arg1[0xd])
        return 
    
    arg1[0xd] = arg2
    arg2.b = 1
    (*(*arg1 + 0x38))()
}
