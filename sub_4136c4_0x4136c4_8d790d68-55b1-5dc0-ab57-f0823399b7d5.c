// ============================================================
// 函数名称: sub_4136c4
// 虚拟地址: 0x4136c4
// WARP GUID: 8d790d68-55b1-5dc0-ab57-f0823399b7d5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_413a6c, sub_4030d0, sub_4030a0, sub_415370, sub_415210, sub_4089dc, sub_413600
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_4136c4(int32_t arg1, void* arg2, struct _EXCEPTION_REGISTRATION_RECORD* arg3 @ eax, int32_t arg4, int16_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char result
    int32_t ecx
    result, ecx = sub_4089dc(arg2, arg3->__offset(0x70).d)
    
    if (result == 0 || arg5 == 0)
        return result
    
    char eax_3
    int32_t ecx_1
    int32_t edx_1
    eax_3, ecx_1, edx_1 = sub_415210(ecx)
    
    if (eax_3 != 0xa)
        arg3->__offset(0x10).d -= 1
        sub_415370(arg3)
        arg3->__offset(0x74).b = 1
        sub_413600()
        noreturn
    
    edx_1.b = 1
    int32_t var_c = sub_4030a0(ecx_1, edx_1)
    int32_t* var_c_1 = &var_4
    int32_t (* var_10)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* __saved_ebx_1 = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    fsbase->NtTib.ExceptionList = &__saved_ebx
    sub_413a6c(arg3, &var_10, 4)
    (**var_c_1)(__saved_ebx_1, var_10, var_c_1)
    sub_413a6c(arg3, var_c_1[1], var_10)
    arg3->__offset(0x74).b = 1
    arg4(arg3)
    fsbase->NtTib.ExceptionList = arg3
    __return_addr = sub_41378b
    return sub_4030d0(var_c_1)
}
