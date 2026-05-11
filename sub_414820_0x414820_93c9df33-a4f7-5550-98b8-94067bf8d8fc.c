// ============================================================
// 函数名称: sub_414820
// 虚拟地址: 0x414820
// WARP GUID: 93c9df33-a4f7-5550-98b8-94067bf8d8fc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_413600, sub_40e150, sub_40ffac
// [被调用的父级函数]: sub_414aa0
// ============================================================

char* __convention("regparm")sub_414820(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t eax_2 = sub_40ffac(**arg2)
    int32_t eax_2 = sub_40ffac(**arg2)
    int32_t var_c
    
    if (eax_2 != 0 && eax_2() != 0)
        return sub_40e150(arg1, arg2, var_c)
    sub_413600()
    noreturn
}
