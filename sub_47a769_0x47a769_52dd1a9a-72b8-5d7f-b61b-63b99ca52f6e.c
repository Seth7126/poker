// ============================================================
// 函数名称: sub_47a769
// 虚拟地址: 0x47a769
// WARP GUID: 52dd1a9a-72b8-5d7f-b61b-63b99ca52f6e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_47a769(char* arg1, int16_t arg2, uint16_t* arg3 @ esi)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *0x6f637340 += arg1.b
    int32_t eflags
    uint16_t* esi = __outsb(arg2, *arg3, arg3, eflags)
    char temp0 = *arg1
    *arg1 += arg1.b
    bool c = temp0 + arg1.b u< temp0
    char temp1 = arg1.b
    arg1.b = adc.b(temp1, 0x5f, c)
    __outsd(arg2, *esi, esi, eflags)
    
    if (adc.b(temp1, 0x5f, c) == 0 || adc.b(temp1, 0x5f, c) u< temp1
            || (c && adc.b(temp1, 0x5f, c) == temp1))
        undefined
    
    jump("-stringcontainer")
}
