// ============================================================
// 函数名称: sub_4955b8
// 虚拟地址: 0x4955b8
// WARP GUID: dba484fb-7c59-5018-b0ab-655a789a9c8e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: listen, bind
// [内部子函数调用]: sub_4032ac, sub_494e64, sub_49555c
// [被调用的父级函数]: sub_495150, sub_495a58
// ============================================================

int32_t* __convention("regparm")sub_4955b8(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edi = arg2
    int32_t edi = arg2
    int32_t ecx
    int32_t edx_1
    ecx, edx_1 = sub_494e64(bind(arg1[1], &arg1[6], 0x10))
    sub_49555c(arg1, edx_1, ecx)
    
    if (edi s> 5)
        edi = 5
    
    int32_t ecx_1
    ecx_1.b = 4
    int32_t ebx
    ebx.w = 0xffff
    sub_4032ac(arg1, arg1, ecx_1)
    int32_t* result = sub_494e64(listen(arg1[1], edi))
    *(arg1 + 0x29) = 0
    arg1[2].b = 1
    return result
}
