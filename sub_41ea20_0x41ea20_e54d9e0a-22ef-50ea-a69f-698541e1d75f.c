// ============================================================
// 函数名称: sub_41ea20
// 虚拟地址: 0x41ea20
// WARP GUID: e54d9e0a-22ef-50ea-a69f-698541e1d75f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ReleaseDC, DeleteDC, GetObjectA
// [内部子函数调用]: sub_402d00, sub_41e5a0, sub_41a628, sub_40276c
// [被调用的父级函数]: sub_41e6c8
// ============================================================

int32_tsub_41ea20(void* arg1 @ ebp, int32_t arg2, HGDIOBJ arg3, void* arg4, int32_t arg5, int32_t arg6, int32_t* arg7, void* arg8)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    
    if (*(arg1 - 0x10) != 0)
        DeleteDC(*(arg1 - 0x10))
    
    sub_40276c(*(arg1 - 0x14))
    fsbase->NtTib.ExceptionList = arg3
    ReleaseDC(nullptr, *(arg1 - 0xc))
    
    if (*(*(arg1 - 0x3c) + 0xe) u> 8 && *(*(arg1 - 0x3c) + 0x20) u> 0 && *(arg1 - 0x30) == 0)
        *(arg1 - 0x30) = sub_41a628(nullptr, *(arg1 - 0x1c), *(*(arg1 - 0x3c) + 0x20))
    
    sub_402d00(arg1 - 0x9c, 0x54, 0)
    GetObjectA(*(arg1 - 0x28), 0x54, arg1 - 0x9c)
    *(arg1 - 0x6c) = *(*(arg1 - 0x3c) + 0x18)
    *(arg1 - 0x68) = *(*(arg1 - 0x3c) + 0x1c)
    *(arg1 - 0x64) = *(*(arg1 - 0x3c) + 0x20)
    *(arg1 - 0x60) = *(*(arg1 - 0x3c) + 0x24)
    fsbase->NtTib.ExceptionList = arg5
    fsbase->NtTib.ExceptionList = arg7
    sub_40276c(*(arg1 - 0x18))
    void* eax_20
    eax_20.b = *(arg1 - 0x21)
    int32_t* ebp =
        sub_41e5a0(*(arg1 - 4), *(arg1 - 0x28), *(arg1 - 0x30), *(arg1 - 0x38), eax_20.b, arg1 - 0x9c)
    int32_t eax_24
    eax_24.b = (*(*ebp[-1] + 0x24))() != 0
    *(ebp[-1] + 0x1a) = eax_24.b
    ebp[-1]
    int32_t result = (*(*ebp[-1] + 0x10))()
    *ebp
    return result
}
