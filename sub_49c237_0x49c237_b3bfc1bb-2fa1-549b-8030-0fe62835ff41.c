// ============================================================
// 函数名称: sub_49c237
// 虚拟地址: 0x49c237
// WARP GUID: b3bfc1bb-2fa1-549b-8030-0fe62835ff41
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_405500, sub_403e1c, sub_403fb0, sub_40553c, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_49c237(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t edx
    eax, edx = (*(arg1 - 0x75))()
    int32_t eflags
    eax.b = __in_al_dx(edx.w, eflags)
    int32_t var_4 = 0
    int32_t var_8 = 0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = nullptr
    int32_t var_10 = 0
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    int32_t ebx_1 = edx
    int32_t* var_20 = arg1
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    edx.b = 1
    arg1[-1] = sub_4030a0(0, edx)
    sub_405500(&arg1[-2], 0x49c228)
    int32_t (* var_8_1)() = j_sub_40353c
    ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    uint32_t eax_7 = zx.d((*data_5302f0)(ebx_1, 0, ExceptionList_1, var_8_1, arg1))
    int32_t* eax_10
    int32_t ecx
    eax_10, ecx = (*data_530898)(eax_7)
    
    if (eax_10 != 0)
        sub_403fb0(ecx, *eax_10)
        arg1[-3]
        (*(*arg1[-1] + 0x34))()
        int32_t ebx_2 = 0
        int32_t ecx_2 = sub_40553c(&arg1[-2], eax_10[1], 0x49c228)
        
        while (true)
            char* esi_2 = *(arg1[-2] + (ebx_2 << 2))
            
            if (esi_2 == 0)
                break
            
            sub_403fb0(ecx_2, esi_2)
            arg1[-4]
            ecx_2 = (*(*arg1[-1] + 0x34))()
            int32_t temp1_1 = ebx_2
            ebx_2 += 1
            
            if (add_overflow(temp1_1, 1))
                sub_403010()
                noreturn
    
    fsbase->NtTib.ExceptionList = eax_7
    fsbase->NtTib.ExceptionList = arg3
    sub_403e1c(&arg1[-4], 2)
    sub_405500(&arg1[-2], 0x49c228)
    *arg1
    return arg1[-1]
}
