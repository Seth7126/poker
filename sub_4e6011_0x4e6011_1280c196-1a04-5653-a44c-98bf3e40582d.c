// ============================================================
// 函数名称: sub_4e6011
// 虚拟地址: 0x4e6011
// WARP GUID: 1280c196-1a04-5653-a44c-98bf3e40582d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4e6028
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4e6011(char* arg1, void* arg2 @ edi)
{
    // 第一条实际指令: *(arg2 + 0x7fffffe) += 1
    *(arg2 + 0x7fffffe) += 1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    char temp0 = *arg1
    *arg1 += arg1.b
    bool c = temp0 + arg1.b u< temp0
    char temp1 = *arg1
    *arg1 = adc.b(temp1, arg1.b, c)
    bool c_1 = adc.b(temp1, arg1.b, c) u< temp1 || (c && adc.b(temp1, arg1.b, c) == temp1)
    char temp2 = arg1[1]
    arg1[1] = adc.b(temp2, (&arg1[1]).b, c_1)
    arg1[2] = adc.b(arg1[2], (&arg1[2]).b, 
        adc.b(temp2, (&arg1[1]).b, c_1) u< temp2 || (c_1 && adc.b(temp2, (&arg1[1]).b, c_1) == temp2))
    void* edx
    return sub_4e6028(&arg1[2], edx) __tailcall
}
