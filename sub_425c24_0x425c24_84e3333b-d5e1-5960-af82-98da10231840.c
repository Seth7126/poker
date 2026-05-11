// ============================================================
// 函数名称: sub_425c24
// 虚拟地址: 0x425c24
// WARP GUID: 84e3333b-d5e1-5960-af82-98da10231840
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_403828, sub_40b5a8, sub_4318d0
// [被调用的父级函数]: sub_425fce, sub_4b4e2c
// ============================================================

int32_t __convention("regparm")sub_425c24(int32_t* arg1, WPARAM arg2)
{
    // 第一条实际指令: LRESULT eax_2
    LRESULT eax_2
    int32_t edx
    eax_2, edx = SendMessageA(sub_4318d0(arg1), 0x187, arg2, 0)
    
    if (eax_2 != 0xffffffff)
        int32_t eax_3 = neg.d(eax_2)
        return neg.d(sbb.d(eax_3, eax_3, eax_2 != 0))
    
    WPARAM var_10 = arg2
    int32_t var_c
    var_c.b = 0
    edx.b = 1
    sub_40b5a8(sub_40e8c2+0xbe, edx, data_5307e4, 0, &var_10)
    sub_403828()
    noreturn
}
