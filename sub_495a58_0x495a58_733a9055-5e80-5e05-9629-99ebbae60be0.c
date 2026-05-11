// ============================================================
// 函数名称: sub_495a58
// 虚拟地址: 0x495a58
// WARP GUID: 733a9055-5e80-5e05-9629-99ebbae60be0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: socket
// [内部子函数调用]: sub_403828, sub_4032ac, sub_4959c0, sub_495150, sub_4955b8, sub_40b56c
// [被调用的父级函数]: sub_496a58
// ============================================================

int32_t __fastcallsub_495a58(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, char arg4, struct _EXCEPTION_REGISTRATION_RECORD* arg5, int16_t arg6, int32_t arg7)
{
    // 第一条实际指令: if (arg3[2].b != 0)
    if (arg3[2].b != 0)
        arg2.b = 1
        sub_40b56c(0x4940dc, arg2, data_530a38)
        sub_403828()
        noreturn
    
    int32_t var_2c = 0
    int32_t var_34 = 2
    int32_t eax_1
    int32_t edx
    eax_1, edx = socket(var_34, 1, var_2c)
    arg3[1] = eax_1
    
    if (eax_1 == 0xffffffff)
        edx.b = 1
        sub_40b56c(0x4940dc, edx, data_5304bc)
        sub_403828()
        noreturn
    
    int32_t __saved_ebp
    int32_t* var_38 = &__saved_ebp
    int32_t (* var_3c)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ebx_1
    ebx_1.w = 0xffff
    sub_4032ac(arg3, arg3, 0, ExceptionList, var_3c, var_38)
    
    if (arg4 == 0)
        int32_t eax_8
        eax_8.w = arg6
        int16_t var_3c_2 = eax_8.w
        ExceptionList = arg5
        sub_495150(arg1, arg2, arg3, 0, ExceptionList, var_3c_2, arg7)
    else
        int32_t eax_4
        eax_4.w = arg6
        int16_t var_3c_1 = eax_4.w
        ExceptionList = nullptr
        void var_1c
        sub_4959c0(arg1, arg2, &var_1c, ExceptionList.b, var_3c_1, arg7)
        __builtin_memcpy(&arg3[6], &var_1c, 0x10)
        sub_4955b8(arg3, arg5)
    
    fsbase->NtTib.ExceptionList = var_34
    return 0
}
