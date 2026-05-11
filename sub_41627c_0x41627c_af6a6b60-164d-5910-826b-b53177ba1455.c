// ============================================================
// 函数名称: sub_41627c
// 虚拟地址: 0x41627c
// WARP GUID: af6a6b60-164d-5910-826b-b53177ba1455
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408db8, sub_403828, sub_416308, sub_40b5a8, sub_404188, sub_4163fc
// [被调用的父级函数]: sub_42b558, sub_436d90
// ============================================================

int32_t __convention("regparm")sub_41627c(void** arg1, void* arg2)
{
    // 第一条实际指令: int32_t result = sub_404188(arg1[2], arg2)
    int32_t result = sub_404188(arg1[2], arg2)
    int32_t __saved_edi
    
    if (&__saved_edi == 8)
        return result
    
    if (arg2 != 0)
        char eax_2
        int32_t edx_1
        eax_2, edx_1 = sub_408db8(arg2)
        
        if (eax_2 == 0)
            void* var_14 = arg2
            int32_t var_10
            var_10.b = 0xb
            edx_1.b = 1
            sub_40b5a8(0x40ea90, edx_1, data_530480, 0, &var_14)
            sub_403828()
            noreturn
    
    int32_t* edi_1 = arg1[1]
    
    if (edi_1 == 0)
        arg1[2]
        (*(*arg1 + 0x20))(arg2)
    else
        arg1[2]
        (*(*edi_1 + 0x20))(arg2)
    
    sub_4163fc(arg1, 0)
    sub_416308(arg1, arg2)
    return sub_4163fc(arg1, 1)
}
