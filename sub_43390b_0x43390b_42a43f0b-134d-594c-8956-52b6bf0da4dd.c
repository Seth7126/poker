// ============================================================
// 函数名称: sub_43390b
// 虚拟地址: 0x43390b
// WARP GUID: 42a43f0b-134d-594c-8956-52b6bf0da4dd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428
// [被调用的父级函数]: sub_4337f8
// ============================================================

int32_tsub_43390b(int32_t* arg1 @ ebp)
{
    // 第一条实际指令: if ((*(arg1[-3] + 0x20) & 0x10) == 0)
    if ((*(arg1[-3] + 0x20) & 0x10) == 0)
        void* eax = arg1[-1]
        void* edx_2 = *(arg1[-1] + 0x14)
        *(eax + 0x30) = *(edx_2 + 0x28)
        *(eax + 0x34) = *(edx_2 + 0x2c)
        void* eax_2 = *(arg1[-1] + 0x14)
        *(eax_2 + 0x2c) = arg1[-1]
        *(eax_2 + 0x28) = sub_43550c
    
    void* esp
    
    if (*(arg1 - 5) != 0)
        sub_403428(arg1[-1])
        TEB* fsbase
        fsbase->NtTib.ExceptionList = __return_addr
        void arg_10
        esp = &arg_10
    
    *esp
    *(esp + 4)
    *(esp + 8)
    *arg1
    return arg1[-1]
}
