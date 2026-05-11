// ============================================================
// 函数名称: sub_40b694
// 虚拟地址: 0x40b694
// WARP GUID: 200655e5-7a21-5d21-9d5a-b650bd914d79
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40b6b0, sub_40b5a8
// [被调用的父级函数]: sub_40d8c4
// ============================================================

void __convention("regparm")sub_40b694(char* arg1, int32_t arg2, char* arg3, int32_t arg4 @ ebp)
{
    // 第一条实际指令: int16_t cs
    int16_t cs
    uint32_t var_4 = zx.d(cs)
    uint32_t* esp = &var_4
    int32_t temp1 = *(arg4 + (arg1 << 1) + 0x72) | arg2
    *(arg4 + (arg1 << 1) + 0x72) = temp1
    
    if (temp1 u>= 0)
        if (temp1 u>= 0)
            int32_t eflags
            int16_t* gsbase
            int16_t temp0
            temp0, eflags = __arpl_memw_gpr16(*(gsbase + arg1), arg3.w)
            *(gsbase + arg1) = temp0
            *arg1 += arg1.b
            *arg3 += arg1.b
            *arg1 += arg1.b
            int16_t entry_ebx
            arg1[arg2 + 0x40040] += entry_ebx:1.b
            *arg1 += arg1.b
            return sub_40b6b0() __tailcall
        
        uint32_t* var_8 = &var_4
        arg2.b = 1
        int32_t esi_1
        arg1, esi_1 = sub_40b5a8(0x407e98, arg2, data_530140, 0, var_8)
        *(arg1 + 0xc) = esi_1
        esp = &var_8
    
    *esp
    esp[1]
    esp[2]
}
