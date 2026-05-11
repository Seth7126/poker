// ============================================================
// 函数名称: sub_40b5a8
// 虚拟地址: 0x40b5a8
// WARP GUID: 00f0ffd0-2e9d-528d-9976-d18483a3b270
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_403e4c, sub_405ae8, sub_403e1c, sub_409ae0
// [被调用的父级函数]: sub_467280, sub_41452d, sub_412ac8, sub_40b84c, sub_494e64, sub_49611c, sub_4953af, sub_49492a, sub_4b6120, sub_494fc8, sub_494f1c, sub_49630c, sub_41627c, sub_410b30, sub_40c7bc, sub_425c24, sub_40b6b0, sub_466f3c, sub_4953f4, sub_40b694, sub_416194, sub_495f94, sub_4155c8, sub_40fcf8
// ============================================================

int32_t __convention("regparm")sub_40b5a8(void* arg1, int32_t arg2, char** arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t var_c = 0
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t edi
    int32_t var_18 = edi
    int32_t* esp_1 = &var_18
    
    if (arg2.b != 0)
        void var_28
        esp_1 = &var_28
        arg1 = sub_4033d0(arg3, arg2)
    
    *(esp_1 - 4) = &var_4
    *(esp_1 - 8) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_1 - 0xc
    *(esp_1 - 0x10) = &var_8
    sub_405ae8(arg3, &var_c)
    sub_409ae0(arg4, arg5, var_c)
    sub_403e4c(arg1 + 4, var_8)
    *(esp_1 - 4)
    fsbase->NtTib.ExceptionList = *(esp_1 - 0xc)
    *(esp_1 - 4) = sub_40b61b
    return sub_403e1c(&var_c, 2)
}
