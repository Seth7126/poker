// ============================================================
// 函数名称: sub_514468
// 虚拟地址: 0x514468
// WARP GUID: 33976e1e-4fc7-5b60-b240-ed01df9303b9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_4973e0, sub_40422c, sub_50c2d0, sub_404188, sub_5119f8, sub_50d52c, sub_40401c, sub_515920, sub_402bdc, sub_402b90, sub_403df8, sub_404280, sub_402bc0
// [被调用的父级函数]: sub_509890, sub_4e6659, sub_4e649b
// ============================================================

void* __convention("regparm")sub_514468(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_20c = ebx
    int32_t esi
    int32_t var_210 = esi
    int32_t edi
    int32_t var_214 = edi
    void* var_208 = nullptr
    void* var_194 = nullptr
    char* var_90 = nullptr
    void* var_8 = arg2
    sub_40422c(var_8)
    int32_t* var_218 = &var_4
    int32_t (* var_21c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void var_8c
    sub_50d52c(0, &var_8c)
    sub_404280(1, 1, var_8, &var_90)
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    sub_404188(var_90, 0x514718)
    sub_404188(var_8, 0x514724)
    
    if (*(arg1 + 0x344) != 0)
        *(arg1 + 0x60)
        sub_4973e0()
        int32_t edx_1
        edx_1.b = 1
        (*(**(arg1 + 0x60) - 4))()
        esp = &var_8
    else if (*(arg1 + 0x345) != 0)
        *(arg1 + 0x94)
        sub_4973e0()
        int32_t edx_2
        edx_2.b = 1
        (*(**(arg1 + 0x94) - 4))()
        esp = &var_8
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_514704
    sub_403df8(&ebp_1[-0x81])
    sub_403df8(&ebp_1[-0x64])
    sub_403df8(&ebp_1[-0x23])
    sub_403df8(&ebp_1[-1])
    return &ebp_1[-1]
}
