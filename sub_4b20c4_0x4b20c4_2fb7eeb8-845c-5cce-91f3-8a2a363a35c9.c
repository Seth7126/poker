// ============================================================
// 函数名称: sub_4b20c4
// 虚拟地址: 0x4b20c4
// WARP GUID: 2fb7eeb8-845c-5cce-91f3-8a2a363a35c9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4b207d
// ============================================================

int32_t __convention("regparm")sub_4b20c4(char* arg1, char* arg2, int32_t arg3, uint16_t* arg4 @ esi, int32_t arg5 @ edi)
{
    // 第一条实际指令: int32_t entry_ebx
    int32_t entry_ebx
    arg1[0x33004282] += (entry_ebx - 1).b
    char temp1 = *arg1
    *arg1 += arg3.b
    int32_t eflags
    __outsd(arg2.w, *arg4, arg4, eflags)
    int16_t* edi
    int16_t temp0
    temp0, edi = __insd(arg5, arg2.w, eflags)
    *edi = temp0
    
    if (entry_ebx != 0xffffffff)
        uint8_t* edi_1
        uint8_t temp0_1
        temp0_1, edi_1 = __insb(edi, arg2.w, eflags)
        *edi_1 = temp0_1
        
        if (temp1 + arg3.b u>= temp1)
            jump(&data_4b2100:1)
        
        jump(0x4b20d7)
    
    char temp3 = (entry_ebx + 1):1.b
    int32_t ebx_2
    ebx_2:1.b = (entry_ebx + 1):1.b * 2
    *arg2 = adc.b(*arg2, ebx_2.b, temp3 + (entry_ebx + 1):1.b u< temp3)
    arg2[ebx_2 + 1] += arg2:1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 = *arg1
    char temp5 = arg1[0x4305000c]
    arg1[0x4305000c] += arg1.b
    
    if (temp5 != neg.b(arg1.b))
        return sub_4b215e(arg3, arg2, arg1) __tailcall
    
    char* gsbase
    *(gsbase + arg1) += arg2.b
    *(&arg1[1] * 2) += arg3.b
    undefined
}
