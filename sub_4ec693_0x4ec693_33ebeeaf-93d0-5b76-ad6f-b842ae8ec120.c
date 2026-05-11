// ============================================================
// 函数名称: sub_4ec693
// 虚拟地址: 0x4ec693
// WARP GUID: 33ebeeaf-93d0-5b76-ad6f-b842ae8ec120
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_426afc, sub_42679c, sub_42b778, sub_42affc, sub_403df8
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_4ec693(char* arg1, int32_t arg2, int32_t arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, int32_t arg6 @ edi)
{
    // 第一条实际指令: int32_t temp1 = *0xd000000
    int32_t temp1 = *0xd000000
    *0xd000000 -= 1
    int32_t var_4 = arg2
    int32_t* esp = &var_4
    int32_t eflags
    int16_t* edi
    int16_t temp0
    temp0, edi = __insd(arg6, arg2.w, eflags)
    *edi = temp0
    __outsd(arg2.w, *arg5, arg5, eflags)
    TEB* fsbase
    
    if (temp1 == 1)
        arg1.b = *0xc033fff3
    else
        void* var_8
        bool c
        
        if (not(c))
            *arg1 &= arg1.b
            *arg1 += arg1.b
            var_8 = arg4
            int32_t* edx = *(arg1 + 0x60a8)
            
            if (edx[0xf] != 0x10)
                return sub_42affc(edx, 0x10)
            
            return sub_42affc(edx, 0x190)
        
        var_8 = arg4
        int32_t (* var_c_1)(void* arg1, void* arg2) = j_sub_4037f0
        int32_t var_10 = *(fsbase + arg1)
        *(fsbase + arg1) = &var_10
        void* entry_ebx
        *(entry_ebx + 0x60b0)
        sub_42b778(arg3 + 1, arg4 - 4)
        sub_42679c(sub_426afc(), *(arg4 - 4))
        esp = &var_8
        arg1 = nullptr
    
    esp[2]
    *(fsbase + arg1) = *esp
    esp[2] = sub_4ec724
    sub_403df8(arg4 - 4)
    return arg4 - 4
}
