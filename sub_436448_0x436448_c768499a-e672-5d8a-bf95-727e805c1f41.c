// ============================================================
// 函数名称: sub_436448
// 虚拟地址: 0x436448
// WARP GUID: c768499a-e672-5d8a-bf95-727e805c1f41
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4364f0, sub_403248, sub_416184
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_436448(int32_t* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2)
{
    // 第一条实际指令: sub_416184(arg1, arg2)
    sub_416184(arg1, arg2)
    int32_t* edi = arg2->__offset(0x2c).d
    char result = sub_403248(edi, &data_4361a0)
    
    if (result == 0)
        return result
    
    return sub_4364f0(arg1, edi)
}
