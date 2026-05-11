// ============================================================
// 函数名称: sub_5205d0
// 虚拟地址: 0x5205d0
// WARP GUID: 4b17918e-5b66-5e77-98b0-a1b90a3caf47
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_409040, sub_4040c4, sub_406010, sub_40634c, sub_402824, sub_403e1c, sub_4062e1, sub_4062f8, sub_405e46, sub_405f4c
// [被调用的父级函数]: sub_4dd144
// ============================================================

int32_t __convention("regparm")sub_5205d0(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_15c = ebx
    int32_t esi
    int32_t var_160 = esi
    int32_t edi
    int32_t var_164 = edi
    int32_t var_158 = 0
    char* var_154 = nullptr
    int32_t* var_168 = &var_4
    int32_t (* var_16c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    ebx.b = 9
    char i
    
    do
        sub_4040c4(&var_154, *(*data_530304 + 0xa64), "\data\settings\hs.dat")
        void var_150
        sub_405e46(&var_150, var_154)
        sub_4040c4(&var_158, *(*data_530304 + 0xa64), "\data\settings\hs.dat")
        
        if (sub_409040(var_158) == 0)
            sub_402824(sub_4062f8())
            void* eax_10 = &var_150
            sub_40634c(eax_10, arg1 + 0x2a244)
            sub_402824(eax_10)
            sub_402824(sub_405f4c(&var_150))
        
        sub_402824(sub_4062e1())
        sub_402824(sub_406010(&var_150, arg1 + 0x2a244))
        sub_402824(sub_405f4c(&var_150))
        i = ebx.b
        ebx.b -= 1
    while (i != 1)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_168_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_5206e3
    return sub_403e1c(&var_158, 2)
}
