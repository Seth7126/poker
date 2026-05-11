// ============================================================
// 函数名称: sub_425014
// 虚拟地址: 0x425014
// WARP GUID: 44de3ef3-4fc7-5127-89da-a80245e88053
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetFocus
// [内部子函数调用]: sub_4032ac, sub_42f268, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_425014(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t eax = *arg2
    int32_t eax = *arg2
    
    if (eax != 0x201 && eax != 0x203)
        if (eax == 0xbd11 && arg1[0x7c].b != 0)
            return (eax - 0x203).b - 0xe
    else if ((arg1[8].b & 0x10) == 0)
        int32_t ebx
        ebx.w = 0xffb9
        
        if (sub_4032ac(arg1) == 0)
            arg1[0x7c].b = 1
            SetFocus(sub_4318d0(arg1))
            arg1[0x7c].b = 0
            ebx.w = 0xffb9
            char result = sub_4032ac(arg1)
            
            if (result == 0)
                return result
    
    return sub_42f268(arg1, arg2)
}
