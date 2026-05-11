// ============================================================
// 函数名称: sub_41ba2c
// 虚拟地址: 0x41ba2c
// WARP GUID: 4d112ee6-ebc5-5724-84ee-bbf0d8106ff1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410c00, sub_403018, sub_403248
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_41ba2c(void** arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t eax_1 = sub_403018(arg2)
    int32_t eax_1 = sub_403018(arg2)
    
    if (sub_403248(arg1[1], eax_1) == 0)
        sub_410c00(arg1, arg2)
        noreturn
    
    arg1[1]
    return (*(*arg2 + 8))()
}
