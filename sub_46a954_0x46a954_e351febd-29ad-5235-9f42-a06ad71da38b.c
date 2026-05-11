// ============================================================
// 函数名称: sub_46a954
// 虚拟地址: 0x46a954
// WARP GUID: e351febd-29ad-5235-9f42-a06ad71da38b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e90, sub_404138, sub_408e1c, sub_4741fc, sub_403df8, sub_403e1c
// [被调用的父级函数]: sub_478234
// ============================================================

int32_t __convention("regparm")sub_46a954(void* arg1, int32_t arg2 @ esi, int32_t arg3 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t i_1 = 5
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    int32_t entry_ebx
    *(esp_2 - 4) = entry_ebx
    *(esp_2 - 8) = arg2
    *(esp_2 - 0xc) = arg3
    void* edi = data_530374
    *(esp_2 - 0x10) = &var_4
    *(esp_2 - 0x14) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x18) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_2 - 0x18
    void* var_8
    sub_403df8(&var_8)
    int32_t var_c
    sub_403e90(&var_c, 0x46ab2c)
    int32_t var_10
    *(esp_2 - 0x1c) = &var_10
    *(esp_2 - 0x20) = 0xd56
    (*edi)()
    *esp_2 = var_8
    *(esp_2 - 4) = "GL_DEPTH_BITS="
    int32_t var_14
    sub_408e1c(var_10, &var_14)
    *(esp_2 - 8) = var_14
    *(esp_2 - 0xc) = var_c
    sub_404138(&var_8, 4)
    *esp_2 = &var_10
    *(esp_2 - 4) = 0xd57
    (*edi)()
    *esp_2 = var_8
    *(esp_2 - 4) = "GL_STENCIL_BITS="
    int32_t var_18
    sub_408e1c(var_10, &var_18)
    *(esp_2 - 8) = var_18
    void* esp_18
    *(esp_18 - 8) = var_c
    sub_404138(&var_8, 4)
    *(esp_18 + 4) = &var_10
    *esp_18 = 0xd55
    (*edi)()
    *(esp_18 + 4) = var_8
    *esp_18 = "GL_ALPHA_BITS="
    int32_t var_1c
    sub_408e1c(var_10, &var_1c)
    *(esp_18 - 4) = var_1c
    *(esp_18 - 8) = var_c
    sub_404138(&var_8, 4)
    *(esp_18 + 4) = &var_10
    *esp_18 = 0xd52
    (*edi)()
    *(esp_18 + 4) = var_8
    *esp_18 = "GL_RED_BITS="
    int32_t var_20
    sub_408e1c(var_10, &var_20)
    *(esp_18 - 4) = var_20
    *(esp_18 - 8) = var_c
    sub_404138(&var_8, 4)
    *(esp_18 + 4) = &var_10
    *esp_18 = 0xd53
    (*edi)()
    *(esp_18 + 4) = var_8
    *esp_18 = "GL_GREEN_BITS="
    int32_t var_24
    sub_408e1c(var_10, &var_24)
    *(esp_18 - 4) = var_24
    *(esp_18 - 8) = var_c
    sub_404138(&var_8, 4)
    *(esp_18 + 4) = &var_10
    *esp_18 = 0xd54
    (*edi)()
    *(esp_18 + 4) = var_8
    *esp_18 = "GL_BLUE_BITS="
    int32_t var_28
    sub_408e1c(var_10, &var_28)
    *(esp_18 - 4) = var_28
    void* esp_50
    *(esp_50 - 8) = var_c
    sub_404138(&var_8, 4)
    *(esp_50 + 4) = &var_10
    *esp_50 = 0xb94
    (*edi)()
    *(esp_50 + 4) = var_8
    *esp_50 = "GL_STENCIL_FAIL="
    int32_t var_2c
    sub_408e1c(var_10, &var_2c)
    *(esp_50 - 4) = var_2c
    *(esp_50 - 8) = var_c
    sub_404138(&var_8, 4)
    sub_4741fc(arg1, var_8, "OpenGL Information")
    *(esp_50 + 0x10)
    fsbase->NtTib.ExceptionList = *(esp_50 + 8)
    *(esp_50 + 0x10) = sub_46ab1b
    sub_403e1c(&var_2c, 7)
    return sub_403e1c(&var_c, 2)
}
