// ============================================================
// 函数名称: sub_42a97c
// 虚拟地址: 0x42a97c
// WARP GUID: 9b508dc5-1a2b-51b2-b3c7-346194f1ef1a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_415d18, sub_42a550, sub_403428, sub_418718
// [被调用的父级函数]: sub_42d8f4, sub_432928
// ============================================================

int32_t* __convention("regparm")sub_42a97c(int32_t* arg1, int32_t arg2)
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
    int32_t* esp = &var_10
    
    if (arg2.b != 0)
        void var_20
        esp = &var_20
        arg1 = sub_4033d0(ecx, arg2)
    
    var_8:3.b = arg2.b
    sub_415d18(arg1, 0, ecx)
    arg1[0xb] = arg1
    arg1[0xa] = *(*arg1 + 0x6c)
    arg1[0x10] = 0xaa
    int32_t edx
    edx.b = 1
    int32_t* eax_3
    int32_t edx_1
    eax_3, edx_1 = sub_418718(sub_416e58+0x3d4, edx)
    arg1[0x16] = eax_3
    eax_3[3] = arg1
    eax_3[2] = sub_42b828
    *(arg1 + 0x51) = 3
    edx_1.b = 1
    int32_t* eax_4 = sub_42a550(sub_42710b+0x129, edx_1, arg1)
    arg1[0x19] = eax_4
    eax_4[7] = arg1
    eax_4[6] = sub_42c574
    arg1[0x18] = 0x80000005
    *(arg1 + 0x47) = 1
    arg1[0x12].b = 1
    *(arg1 + 0x49) = 1
    *(arg1 + 0x4a) = 1
    *(arg1 + 0x8a) = 1
    arg1[0x14].b = 1
    *(arg1 + 0x4e) = 0
    *(arg1 + 0x6a) = 0xfff4
    arg1[0x29] = 0x4404fc
    
    if (var_8:3.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    esp[2]
    esp[3]
    return arg1
}
