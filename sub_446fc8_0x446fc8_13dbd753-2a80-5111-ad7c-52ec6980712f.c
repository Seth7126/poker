// ============================================================
// 函数名称: sub_446fc8
// 虚拟地址: 0x446fc8
// WARP GUID: 13dbd753-2a80-5111-ad7c-52ec6980712f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetDeviceCaps, GetKeyboardLayout, ReleaseDC, GetDC
// [内部子函数调用]: sub_4033d0, sub_415d18, sub_447314, sub_4476f4, sub_4030a0, sub_403428, sub_418718
// [被调用的父级函数]: sub_435eac
// ============================================================

int32_t* __convention("regparm")sub_446fc8(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ecx
    int32_t* var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* esp_1 = &var_10
    
    if (arg2.b != 0)
        void var_20
        esp_1 = &var_20
        arg1 = sub_4033d0(ecx, arg2)
    
    var_8:3.b = arg2.b
    sub_415d18(arg1, 0, ecx)
    sub_447314(arg1)
    *(esp_1 - 4) = 0
    int32_t eax_2
    int32_t ecx_1
    int32_t edx
    eax_2, ecx_1, edx = GetKeyboardLayout()
    arg1[0xc] = eax_2
    edx.b = 1
    int32_t eax_4
    int32_t ecx_2
    int32_t edx_1
    eax_4, ecx_2, edx_1 = sub_4030a0(ecx_1, edx)
    arg1[0x10] = eax_4
    edx_1.b = 1
    int32_t eax_6
    int32_t ecx_3
    int32_t edx_2
    eax_6, ecx_3, edx_2 = sub_4030a0(ecx_2, edx_1)
    arg1[0x11] = eax_6
    edx_2.b = 1
    int32_t eax_8
    int32_t ecx_4
    int32_t edx_3
    eax_8, ecx_4, edx_3 = sub_4030a0(ecx_3, edx_2)
    arg1[0x12] = eax_8
    edx_3.b = 1
    int32_t eax_10
    int32_t ecx_5
    int32_t edx_4
    eax_10, ecx_5, edx_4 = sub_4030a0(ecx_4, edx_3)
    arg1[0x13] = eax_10
    edx_4.b = 1
    arg1[0x1c] = sub_4030a0(ecx_5, edx_4)
    *(esp_1 - 4) = 0
    int32_t eax_13 = GetDC()
    *(esp_1 - 4) = 0x5a
    *(esp_1 - 8) = eax_13
    arg1[0xd] = GetDeviceCaps()
    *(esp_1 - 4) = eax_13
    *(esp_1 - 8) = 0
    ReleaseDC()
    *(esp_1 - 4) = arg1[0x13]
    *(esp_1 - 8) = sub_446f98
    *(esp_1 - 0xc) = 0
    *(esp_1 - 0x10) = 0
    (*data_53050c)()
    void* esp_16 = esp_1
    int32_t edx_5
    edx_5.b = 1
    int32_t* eax_18
    int32_t edx_6
    eax_18, edx_6 = sub_418718(sub_416e58+0x3d4, edx_5)
    arg1[0x1e] = eax_18
    edx_6.b = 1
    int32_t* eax_19
    int32_t edx_7
    eax_19, edx_7 = sub_418718(sub_416e58+0x3d4, edx_6)
    arg1[0x1f] = eax_19
    edx_7.b = 1
    arg1[0x1d] = sub_418718(sub_416e58+0x3d4, edx_7)
    sub_4476f4(arg1)
    void* eax_22 = arg1[0x1e]
    *(eax_22 + 0xc) = arg1
    *(eax_22 + 8) = sub_447610
    void* eax_23 = arg1[0x1f]
    *(eax_23 + 0xc) = arg1
    *(eax_23 + 8) = sub_447610
    void* eax_24 = arg1[0x1d]
    *(eax_24 + 0xc) = arg1
    *(eax_24 + 8) = sub_447610
    
    if (var_8:3.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_16
        esp_16 += 0x10
    
    *esp_16
    *(esp_16 + 4)
    *(esp_16 + 8)
    *(esp_16 + 0xc)
    return arg1
}
