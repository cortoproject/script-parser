
// Generated from Corto.g4 by ANTLR 4.7.1


#include "CortoListener.h"
#include "CortoVisitor.h"

#include "CortoParser.h"


#ifndef _WIN32
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif


using namespace antlrcpp;
using namespace antlr4;

CortoParser::CortoParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

CortoParser::~CortoParser() {
  delete _interpreter;
}

std::string CortoParser::getGrammarFileName() const {
  return "Corto.g4";
}

const std::vector<std::string>& CortoParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& CortoParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

CortoParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::StatementsContext* CortoParser::ProgramContext::statements() {
  return getRuleContext<CortoParser::StatementsContext>(0);
}


size_t CortoParser::ProgramContext::getRuleIndex() const {
  return CortoParser::RuleProgram;
}

void CortoParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void CortoParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


antlrcpp::Any CortoParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::ProgramContext* CortoParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, CortoParser::RuleProgram);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    statements();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementsContext ------------------------------------------------------------------

CortoParser::StatementsContext::StatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CortoParser::StatementContext *> CortoParser::StatementsContext::statement() {
  return getRuleContexts<CortoParser::StatementContext>();
}

CortoParser::StatementContext* CortoParser::StatementsContext::statement(size_t i) {
  return getRuleContext<CortoParser::StatementContext>(i);
}


size_t CortoParser::StatementsContext::getRuleIndex() const {
  return CortoParser::RuleStatements;
}

void CortoParser::StatementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatements(this);
}

void CortoParser::StatementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatements(this);
}


antlrcpp::Any CortoParser::StatementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitStatements(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::StatementsContext* CortoParser::statements() {
  StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, getState());
  enterRule(_localctx, 2, CortoParser::RuleStatements);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CortoParser::T__18)
      | (1ULL << CortoParser::T__27)
      | (1ULL << CortoParser::T__28)
      | (1ULL << CortoParser::T__29)
      | (1ULL << CortoParser::T__32)
      | (1ULL << CortoParser::T__33)
      | (1ULL << CortoParser::T__34)
      | (1ULL << CortoParser::BOOLEAN)
      | (1ULL << CortoParser::NULL_LITERAL)
      | (1ULL << CortoParser::COND_NOT)
      | (1ULL << CortoParser::SCOPE_IDENTIFIER)
      | (1ULL << CortoParser::IDENTIFIER)
      | (1ULL << CortoParser::HEXADECIMAL)
      | (1ULL << CortoParser::SIGNED_INTEGER_MEASUREMENT)
      | (1ULL << CortoParser::INTEGER_MEASUREMENT)
      | (1ULL << CortoParser::FLOATING_POINT_MEASUREMENT)
      | (1ULL << CortoParser::INTEGER)
      | (1ULL << CortoParser::SIGNED_INTEGER)
      | (1ULL << CortoParser::FLOATING_POINT)
      | (1ULL << CortoParser::STRING)
      | (1ULL << CortoParser::LPAREN)
      | (1ULL << CortoParser::NL))) != 0)) {
      setState(94);
      statement();
      setState(99);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

CortoParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CortoParser::StatementContext::NL() {
  return getToken(CortoParser::NL, 0);
}

CortoParser::ExpressionContext* CortoParser::StatementContext::expression() {
  return getRuleContext<CortoParser::ExpressionContext>(0);
}

CortoParser::EolContext* CortoParser::StatementContext::eol() {
  return getRuleContext<CortoParser::EolContext>(0);
}

CortoParser::DeclarationContext* CortoParser::StatementContext::declaration() {
  return getRuleContext<CortoParser::DeclarationContext>(0);
}


size_t CortoParser::StatementContext::getRuleIndex() const {
  return CortoParser::RuleStatement;
}

void CortoParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void CortoParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any CortoParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::StatementContext* CortoParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, CortoParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(105);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(100);
      match(CortoParser::NL);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(101);
      expression();
      setState(102);
      eol();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(104);
      declaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

CortoParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Storage_expressionContext* CortoParser::DeclarationContext::storage_expression() {
  return getRuleContext<CortoParser::Storage_expressionContext>(0);
}

CortoParser::Declaration_identifierContext* CortoParser::DeclarationContext::declaration_identifier() {
  return getRuleContext<CortoParser::Declaration_identifierContext>(0);
}

CortoParser::ScopeContext* CortoParser::DeclarationContext::scope() {
  return getRuleContext<CortoParser::ScopeContext>(0);
}

CortoParser::EolContext* CortoParser::DeclarationContext::eol() {
  return getRuleContext<CortoParser::EolContext>(0);
}

CortoParser::Initializer_assignmentContext* CortoParser::DeclarationContext::initializer_assignment() {
  return getRuleContext<CortoParser::Initializer_assignmentContext>(0);
}

CortoParser::Initializer_shorthandContext* CortoParser::DeclarationContext::initializer_shorthand() {
  return getRuleContext<CortoParser::Initializer_shorthandContext>(0);
}


size_t CortoParser::DeclarationContext::getRuleIndex() const {
  return CortoParser::RuleDeclaration;
}

void CortoParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void CortoParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}


antlrcpp::Any CortoParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::DeclarationContext* CortoParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, CortoParser::RuleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(127);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(107);
      storage_expression(0);
      setState(108);
      declaration_identifier();
      setState(110);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CortoParser::T__16)
        | (1ULL << CortoParser::LPAREN)
        | (1ULL << CortoParser::LBRACK))) != 0)) {
        setState(109);
        initializer_assignment();
      }
      setState(114);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CortoParser::T__1: {
          setState(112);
          scope();
          break;
        }

        case CortoParser::EOF:
        case CortoParser::T__36:
        case CortoParser::NL: {
          setState(113);
          eol();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(116);
      declaration_identifier();
      setState(117);
      initializer_shorthand();
      setState(118);
      eol();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(120);
      declaration_identifier();
      setState(121);
      initializer_assignment();
      setState(122);
      scope();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(124);
      declaration_identifier();
      setState(125);
      scope();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Declaration_identifierContext ------------------------------------------------------------------

CortoParser::Declaration_identifierContext::Declaration_identifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CortoParser::Storage_identifierContext *> CortoParser::Declaration_identifierContext::storage_identifier() {
  return getRuleContexts<CortoParser::Storage_identifierContext>();
}

CortoParser::Storage_identifierContext* CortoParser::Declaration_identifierContext::storage_identifier(size_t i) {
  return getRuleContext<CortoParser::Storage_identifierContext>(i);
}

CortoParser::Argument_declarationContext* CortoParser::Declaration_identifierContext::argument_declaration() {
  return getRuleContext<CortoParser::Argument_declarationContext>(0);
}

std::vector<CortoParser::Storage_expressionContext *> CortoParser::Declaration_identifierContext::storage_expression() {
  return getRuleContexts<CortoParser::Storage_expressionContext>();
}

CortoParser::Storage_expressionContext* CortoParser::Declaration_identifierContext::storage_expression(size_t i) {
  return getRuleContext<CortoParser::Storage_expressionContext>(i);
}


size_t CortoParser::Declaration_identifierContext::getRuleIndex() const {
  return CortoParser::RuleDeclaration_identifier;
}

void CortoParser::Declaration_identifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration_identifier(this);
}

void CortoParser::Declaration_identifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration_identifier(this);
}


antlrcpp::Any CortoParser::Declaration_identifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitDeclaration_identifier(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Declaration_identifierContext* CortoParser::declaration_identifier() {
  Declaration_identifierContext *_localctx = _tracker.createInstance<Declaration_identifierContext>(_ctx, getState());
  enterRule(_localctx, 8, CortoParser::RuleDeclaration_identifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(147);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(129);
      storage_identifier();
      setState(131);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
      case 1: {
        setState(130);
        argument_declaration();
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(133);
      storage_identifier();
      setState(136); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(134);
        match(CortoParser::T__0);
        setState(135);
        storage_identifier();
        setState(138); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == CortoParser::T__0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(140);
      storage_expression(0);
      setState(143); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(141);
        match(CortoParser::T__0);
        setState(142);
        storage_expression(0);
        setState(145); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == CortoParser::T__0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Argument_declarationContext ------------------------------------------------------------------

CortoParser::Argument_declarationContext::Argument_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CortoParser::Argument_declarationContext::LPAREN() {
  return getToken(CortoParser::LPAREN, 0);
}

std::vector<CortoParser::ArgumentContext *> CortoParser::Argument_declarationContext::argument() {
  return getRuleContexts<CortoParser::ArgumentContext>();
}

CortoParser::ArgumentContext* CortoParser::Argument_declarationContext::argument(size_t i) {
  return getRuleContext<CortoParser::ArgumentContext>(i);
}

tree::TerminalNode* CortoParser::Argument_declarationContext::RPAREN() {
  return getToken(CortoParser::RPAREN, 0);
}


size_t CortoParser::Argument_declarationContext::getRuleIndex() const {
  return CortoParser::RuleArgument_declaration;
}

void CortoParser::Argument_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgument_declaration(this);
}

void CortoParser::Argument_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgument_declaration(this);
}


antlrcpp::Any CortoParser::Argument_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitArgument_declaration(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Argument_declarationContext* CortoParser::argument_declaration() {
  Argument_declarationContext *_localctx = _tracker.createInstance<Argument_declarationContext>(_ctx, getState());
  enterRule(_localctx, 10, CortoParser::RuleArgument_declaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    match(CortoParser::LPAREN);
    setState(150);
    argument();
    setState(155);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CortoParser::T__0) {
      setState(151);
      match(CortoParser::T__0);
      setState(152);
      argument();
      setState(157);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(158);
    match(CortoParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentContext ------------------------------------------------------------------

CortoParser::ArgumentContext::ArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Storage_expressionContext* CortoParser::ArgumentContext::storage_expression() {
  return getRuleContext<CortoParser::Storage_expressionContext>(0);
}

tree::TerminalNode* CortoParser::ArgumentContext::IDENTIFIER() {
  return getToken(CortoParser::IDENTIFIER, 0);
}


size_t CortoParser::ArgumentContext::getRuleIndex() const {
  return CortoParser::RuleArgument;
}

void CortoParser::ArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgument(this);
}

void CortoParser::ArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgument(this);
}


antlrcpp::Any CortoParser::ArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitArgument(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::ArgumentContext* CortoParser::argument() {
  ArgumentContext *_localctx = _tracker.createInstance<ArgumentContext>(_ctx, getState());
  enterRule(_localctx, 12, CortoParser::RuleArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    storage_expression(0);
    setState(161);
    match(CortoParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScopeContext ------------------------------------------------------------------

CortoParser::ScopeContext::ScopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::StatementsContext* CortoParser::ScopeContext::statements() {
  return getRuleContext<CortoParser::StatementsContext>(0);
}

CortoParser::Default_scope_typeContext* CortoParser::ScopeContext::default_scope_type() {
  return getRuleContext<CortoParser::Default_scope_typeContext>(0);
}


size_t CortoParser::ScopeContext::getRuleIndex() const {
  return CortoParser::RuleScope;
}

void CortoParser::ScopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScope(this);
}

void CortoParser::ScopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScope(this);
}


antlrcpp::Any CortoParser::ScopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitScope(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::ScopeContext* CortoParser::scope() {
  ScopeContext *_localctx = _tracker.createInstance<ScopeContext>(_ctx, getState());
  enterRule(_localctx, 14, CortoParser::RuleScope);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    match(CortoParser::T__1);
    setState(165);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CortoParser::T__3) {
      setState(164);
      default_scope_type();
    }
    setState(167);
    statements();
    setState(168);
    match(CortoParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Default_scope_typeContext ------------------------------------------------------------------

CortoParser::Default_scope_typeContext::Default_scope_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Storage_expressionContext* CortoParser::Default_scope_typeContext::storage_expression() {
  return getRuleContext<CortoParser::Storage_expressionContext>(0);
}


size_t CortoParser::Default_scope_typeContext::getRuleIndex() const {
  return CortoParser::RuleDefault_scope_type;
}

void CortoParser::Default_scope_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefault_scope_type(this);
}

void CortoParser::Default_scope_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefault_scope_type(this);
}


antlrcpp::Any CortoParser::Default_scope_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitDefault_scope_type(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Default_scope_typeContext* CortoParser::default_scope_type() {
  Default_scope_typeContext *_localctx = _tracker.createInstance<Default_scope_typeContext>(_ctx, getState());
  enterRule(_localctx, 16, CortoParser::RuleDefault_scope_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(170);
    match(CortoParser::T__3);
    setState(171);
    storage_expression(0);
    setState(172);
    match(CortoParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

CortoParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Assignment_expressionContext* CortoParser::ExpressionContext::assignment_expression() {
  return getRuleContext<CortoParser::Assignment_expressionContext>(0);
}


size_t CortoParser::ExpressionContext::getRuleIndex() const {
  return CortoParser::RuleExpression;
}

void CortoParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void CortoParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any CortoParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::ExpressionContext* CortoParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 18, CortoParser::RuleExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(174);
    assignment_expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assignment_expressionContext ------------------------------------------------------------------

CortoParser::Assignment_expressionContext::Assignment_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Conditional_expressionContext* CortoParser::Assignment_expressionContext::conditional_expression() {
  return getRuleContext<CortoParser::Conditional_expressionContext>(0);
}

CortoParser::Storage_expressionContext* CortoParser::Assignment_expressionContext::storage_expression() {
  return getRuleContext<CortoParser::Storage_expressionContext>(0);
}

CortoParser::Assignment_operatorContext* CortoParser::Assignment_expressionContext::assignment_operator() {
  return getRuleContext<CortoParser::Assignment_operatorContext>(0);
}

CortoParser::Assignment_expressionContext* CortoParser::Assignment_expressionContext::assignment_expression() {
  return getRuleContext<CortoParser::Assignment_expressionContext>(0);
}


size_t CortoParser::Assignment_expressionContext::getRuleIndex() const {
  return CortoParser::RuleAssignment_expression;
}

void CortoParser::Assignment_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment_expression(this);
}

void CortoParser::Assignment_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment_expression(this);
}


antlrcpp::Any CortoParser::Assignment_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitAssignment_expression(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Assignment_expressionContext* CortoParser::assignment_expression() {
  Assignment_expressionContext *_localctx = _tracker.createInstance<Assignment_expressionContext>(_ctx, getState());
  enterRule(_localctx, 20, CortoParser::RuleAssignment_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(181);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(176);
      conditional_expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(177);
      storage_expression(0);
      setState(178);
      assignment_operator();
      setState(179);
      assignment_expression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assignment_operatorContext ------------------------------------------------------------------

CortoParser::Assignment_operatorContext::Assignment_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CortoParser::Assignment_operatorContext::getRuleIndex() const {
  return CortoParser::RuleAssignment_operator;
}

void CortoParser::Assignment_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment_operator(this);
}

void CortoParser::Assignment_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment_operator(this);
}


antlrcpp::Any CortoParser::Assignment_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitAssignment_operator(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Assignment_operatorContext* CortoParser::assignment_operator() {
  Assignment_operatorContext *_localctx = _tracker.createInstance<Assignment_operatorContext>(_ctx, getState());
  enterRule(_localctx, 22, CortoParser::RuleAssignment_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(183);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CortoParser::T__4)
      | (1ULL << CortoParser::T__5)
      | (1ULL << CortoParser::T__6)
      | (1ULL << CortoParser::T__7)
      | (1ULL << CortoParser::T__8)
      | (1ULL << CortoParser::T__9)
      | (1ULL << CortoParser::T__10)
      | (1ULL << CortoParser::T__11)
      | (1ULL << CortoParser::T__12)
      | (1ULL << CortoParser::T__13)
      | (1ULL << CortoParser::T__14))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Conditional_expressionContext ------------------------------------------------------------------

CortoParser::Conditional_expressionContext::Conditional_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Logical_or_expressionContext* CortoParser::Conditional_expressionContext::logical_or_expression() {
  return getRuleContext<CortoParser::Logical_or_expressionContext>(0);
}

CortoParser::ExpressionContext* CortoParser::Conditional_expressionContext::expression() {
  return getRuleContext<CortoParser::ExpressionContext>(0);
}

CortoParser::Conditional_expressionContext* CortoParser::Conditional_expressionContext::conditional_expression() {
  return getRuleContext<CortoParser::Conditional_expressionContext>(0);
}


size_t CortoParser::Conditional_expressionContext::getRuleIndex() const {
  return CortoParser::RuleConditional_expression;
}

void CortoParser::Conditional_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditional_expression(this);
}

void CortoParser::Conditional_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditional_expression(this);
}


antlrcpp::Any CortoParser::Conditional_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitConditional_expression(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Conditional_expressionContext* CortoParser::conditional_expression() {
  Conditional_expressionContext *_localctx = _tracker.createInstance<Conditional_expressionContext>(_ctx, getState());
  enterRule(_localctx, 24, CortoParser::RuleConditional_expression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    logical_or_expression(0);
    setState(191);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CortoParser::T__15) {
      setState(186);
      match(CortoParser::T__15);
      setState(187);
      expression();
      setState(188);
      match(CortoParser::T__16);
      setState(189);
      conditional_expression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Logical_or_expressionContext ------------------------------------------------------------------

CortoParser::Logical_or_expressionContext::Logical_or_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Logical_and_expressionContext* CortoParser::Logical_or_expressionContext::logical_and_expression() {
  return getRuleContext<CortoParser::Logical_and_expressionContext>(0);
}

CortoParser::Logical_or_expressionContext* CortoParser::Logical_or_expressionContext::logical_or_expression() {
  return getRuleContext<CortoParser::Logical_or_expressionContext>(0);
}

tree::TerminalNode* CortoParser::Logical_or_expressionContext::COND_OR() {
  return getToken(CortoParser::COND_OR, 0);
}


size_t CortoParser::Logical_or_expressionContext::getRuleIndex() const {
  return CortoParser::RuleLogical_or_expression;
}

void CortoParser::Logical_or_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogical_or_expression(this);
}

void CortoParser::Logical_or_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogical_or_expression(this);
}


antlrcpp::Any CortoParser::Logical_or_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitLogical_or_expression(this);
  else
    return visitor->visitChildren(this);
}


CortoParser::Logical_or_expressionContext* CortoParser::logical_or_expression() {
   return logical_or_expression(0);
}

CortoParser::Logical_or_expressionContext* CortoParser::logical_or_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CortoParser::Logical_or_expressionContext *_localctx = _tracker.createInstance<Logical_or_expressionContext>(_ctx, parentState);
  CortoParser::Logical_or_expressionContext *previousContext = _localctx;
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, CortoParser::RuleLogical_or_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(194);
    logical_and_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(201);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Logical_or_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLogical_or_expression);
        setState(196);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(197);
        match(CortoParser::COND_OR);
        setState(198);
        logical_and_expression(0); 
      }
      setState(203);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Logical_and_expressionContext ------------------------------------------------------------------

CortoParser::Logical_and_expressionContext::Logical_and_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Or_expressionContext* CortoParser::Logical_and_expressionContext::or_expression() {
  return getRuleContext<CortoParser::Or_expressionContext>(0);
}

CortoParser::Logical_and_expressionContext* CortoParser::Logical_and_expressionContext::logical_and_expression() {
  return getRuleContext<CortoParser::Logical_and_expressionContext>(0);
}

tree::TerminalNode* CortoParser::Logical_and_expressionContext::COND_AND() {
  return getToken(CortoParser::COND_AND, 0);
}


size_t CortoParser::Logical_and_expressionContext::getRuleIndex() const {
  return CortoParser::RuleLogical_and_expression;
}

void CortoParser::Logical_and_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogical_and_expression(this);
}

void CortoParser::Logical_and_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogical_and_expression(this);
}


antlrcpp::Any CortoParser::Logical_and_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitLogical_and_expression(this);
  else
    return visitor->visitChildren(this);
}


CortoParser::Logical_and_expressionContext* CortoParser::logical_and_expression() {
   return logical_and_expression(0);
}

CortoParser::Logical_and_expressionContext* CortoParser::logical_and_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CortoParser::Logical_and_expressionContext *_localctx = _tracker.createInstance<Logical_and_expressionContext>(_ctx, parentState);
  CortoParser::Logical_and_expressionContext *previousContext = _localctx;
  size_t startState = 28;
  enterRecursionRule(_localctx, 28, CortoParser::RuleLogical_and_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(205);
    or_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(212);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Logical_and_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLogical_and_expression);
        setState(207);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(208);
        match(CortoParser::COND_AND);
        setState(209);
        or_expression(0); 
      }
      setState(214);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Or_expressionContext ------------------------------------------------------------------

CortoParser::Or_expressionContext::Or_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Xor_expressionContext* CortoParser::Or_expressionContext::xor_expression() {
  return getRuleContext<CortoParser::Xor_expressionContext>(0);
}

CortoParser::Or_expressionContext* CortoParser::Or_expressionContext::or_expression() {
  return getRuleContext<CortoParser::Or_expressionContext>(0);
}


size_t CortoParser::Or_expressionContext::getRuleIndex() const {
  return CortoParser::RuleOr_expression;
}

void CortoParser::Or_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOr_expression(this);
}

void CortoParser::Or_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOr_expression(this);
}


antlrcpp::Any CortoParser::Or_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitOr_expression(this);
  else
    return visitor->visitChildren(this);
}


CortoParser::Or_expressionContext* CortoParser::or_expression() {
   return or_expression(0);
}

CortoParser::Or_expressionContext* CortoParser::or_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CortoParser::Or_expressionContext *_localctx = _tracker.createInstance<Or_expressionContext>(_ctx, parentState);
  CortoParser::Or_expressionContext *previousContext = _localctx;
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, CortoParser::RuleOr_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(216);
    xor_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(223);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Or_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleOr_expression);
        setState(218);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(219);
        match(CortoParser::T__3);
        setState(220);
        xor_expression(0); 
      }
      setState(225);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Xor_expressionContext ------------------------------------------------------------------

CortoParser::Xor_expressionContext::Xor_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::And_expressionContext* CortoParser::Xor_expressionContext::and_expression() {
  return getRuleContext<CortoParser::And_expressionContext>(0);
}

CortoParser::Xor_expressionContext* CortoParser::Xor_expressionContext::xor_expression() {
  return getRuleContext<CortoParser::Xor_expressionContext>(0);
}


size_t CortoParser::Xor_expressionContext::getRuleIndex() const {
  return CortoParser::RuleXor_expression;
}

void CortoParser::Xor_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXor_expression(this);
}

void CortoParser::Xor_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXor_expression(this);
}


antlrcpp::Any CortoParser::Xor_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitXor_expression(this);
  else
    return visitor->visitChildren(this);
}


CortoParser::Xor_expressionContext* CortoParser::xor_expression() {
   return xor_expression(0);
}

CortoParser::Xor_expressionContext* CortoParser::xor_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CortoParser::Xor_expressionContext *_localctx = _tracker.createInstance<Xor_expressionContext>(_ctx, parentState);
  CortoParser::Xor_expressionContext *previousContext = _localctx;
  size_t startState = 32;
  enterRecursionRule(_localctx, 32, CortoParser::RuleXor_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(227);
    and_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(234);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Xor_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleXor_expression);
        setState(229);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(230);
        match(CortoParser::T__17);
        setState(231);
        and_expression(0); 
      }
      setState(236);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- And_expressionContext ------------------------------------------------------------------

CortoParser::And_expressionContext::And_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Equality_expressionContext* CortoParser::And_expressionContext::equality_expression() {
  return getRuleContext<CortoParser::Equality_expressionContext>(0);
}

CortoParser::And_expressionContext* CortoParser::And_expressionContext::and_expression() {
  return getRuleContext<CortoParser::And_expressionContext>(0);
}


size_t CortoParser::And_expressionContext::getRuleIndex() const {
  return CortoParser::RuleAnd_expression;
}

void CortoParser::And_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnd_expression(this);
}

void CortoParser::And_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnd_expression(this);
}


antlrcpp::Any CortoParser::And_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitAnd_expression(this);
  else
    return visitor->visitChildren(this);
}


CortoParser::And_expressionContext* CortoParser::and_expression() {
   return and_expression(0);
}

CortoParser::And_expressionContext* CortoParser::and_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CortoParser::And_expressionContext *_localctx = _tracker.createInstance<And_expressionContext>(_ctx, parentState);
  CortoParser::And_expressionContext *previousContext = _localctx;
  size_t startState = 34;
  enterRecursionRule(_localctx, 34, CortoParser::RuleAnd_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(238);
    equality_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(245);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<And_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAnd_expression);
        setState(240);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(241);
        match(CortoParser::T__18);
        setState(242);
        equality_expression(0); 
      }
      setState(247);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Equality_expressionContext ------------------------------------------------------------------

CortoParser::Equality_expressionContext::Equality_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Relational_expressionContext* CortoParser::Equality_expressionContext::relational_expression() {
  return getRuleContext<CortoParser::Relational_expressionContext>(0);
}

CortoParser::Equality_expressionContext* CortoParser::Equality_expressionContext::equality_expression() {
  return getRuleContext<CortoParser::Equality_expressionContext>(0);
}

CortoParser::Equality_operatorContext* CortoParser::Equality_expressionContext::equality_operator() {
  return getRuleContext<CortoParser::Equality_operatorContext>(0);
}


size_t CortoParser::Equality_expressionContext::getRuleIndex() const {
  return CortoParser::RuleEquality_expression;
}

void CortoParser::Equality_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEquality_expression(this);
}

void CortoParser::Equality_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEquality_expression(this);
}


antlrcpp::Any CortoParser::Equality_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitEquality_expression(this);
  else
    return visitor->visitChildren(this);
}


CortoParser::Equality_expressionContext* CortoParser::equality_expression() {
   return equality_expression(0);
}

CortoParser::Equality_expressionContext* CortoParser::equality_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CortoParser::Equality_expressionContext *_localctx = _tracker.createInstance<Equality_expressionContext>(_ctx, parentState);
  CortoParser::Equality_expressionContext *previousContext = _localctx;
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, CortoParser::RuleEquality_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(249);
    relational_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(257);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Equality_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleEquality_expression);
        setState(251);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(252);
        equality_operator();
        setState(253);
        relational_expression(0); 
      }
      setState(259);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Equality_operatorContext ------------------------------------------------------------------

CortoParser::Equality_operatorContext::Equality_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CortoParser::Equality_operatorContext::getRuleIndex() const {
  return CortoParser::RuleEquality_operator;
}

void CortoParser::Equality_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEquality_operator(this);
}

void CortoParser::Equality_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEquality_operator(this);
}


antlrcpp::Any CortoParser::Equality_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitEquality_operator(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Equality_operatorContext* CortoParser::equality_operator() {
  Equality_operatorContext *_localctx = _tracker.createInstance<Equality_operatorContext>(_ctx, getState());
  enterRule(_localctx, 38, CortoParser::RuleEquality_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(260);
    _la = _input->LA(1);
    if (!(_la == CortoParser::T__19

    || _la == CortoParser::T__20)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Relational_expressionContext ------------------------------------------------------------------

CortoParser::Relational_expressionContext::Relational_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Shift_expressionContext* CortoParser::Relational_expressionContext::shift_expression() {
  return getRuleContext<CortoParser::Shift_expressionContext>(0);
}

CortoParser::Relational_expressionContext* CortoParser::Relational_expressionContext::relational_expression() {
  return getRuleContext<CortoParser::Relational_expressionContext>(0);
}

CortoParser::Relational_operatorContext* CortoParser::Relational_expressionContext::relational_operator() {
  return getRuleContext<CortoParser::Relational_operatorContext>(0);
}


size_t CortoParser::Relational_expressionContext::getRuleIndex() const {
  return CortoParser::RuleRelational_expression;
}

void CortoParser::Relational_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelational_expression(this);
}

void CortoParser::Relational_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelational_expression(this);
}


antlrcpp::Any CortoParser::Relational_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitRelational_expression(this);
  else
    return visitor->visitChildren(this);
}


CortoParser::Relational_expressionContext* CortoParser::relational_expression() {
   return relational_expression(0);
}

CortoParser::Relational_expressionContext* CortoParser::relational_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CortoParser::Relational_expressionContext *_localctx = _tracker.createInstance<Relational_expressionContext>(_ctx, parentState);
  CortoParser::Relational_expressionContext *previousContext = _localctx;
  size_t startState = 40;
  enterRecursionRule(_localctx, 40, CortoParser::RuleRelational_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(263);
    shift_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(271);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Relational_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleRelational_expression);
        setState(265);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(266);
        relational_operator();
        setState(267);
        shift_expression(0); 
      }
      setState(273);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Relational_operatorContext ------------------------------------------------------------------

CortoParser::Relational_operatorContext::Relational_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CortoParser::Relational_operatorContext::getRuleIndex() const {
  return CortoParser::RuleRelational_operator;
}

void CortoParser::Relational_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelational_operator(this);
}

void CortoParser::Relational_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelational_operator(this);
}


antlrcpp::Any CortoParser::Relational_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitRelational_operator(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Relational_operatorContext* CortoParser::relational_operator() {
  Relational_operatorContext *_localctx = _tracker.createInstance<Relational_operatorContext>(_ctx, getState());
  enterRule(_localctx, 42, CortoParser::RuleRelational_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(274);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CortoParser::T__21)
      | (1ULL << CortoParser::T__22)
      | (1ULL << CortoParser::T__23)
      | (1ULL << CortoParser::T__24))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Shift_expressionContext ------------------------------------------------------------------

CortoParser::Shift_expressionContext::Shift_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Additive_expressionContext* CortoParser::Shift_expressionContext::additive_expression() {
  return getRuleContext<CortoParser::Additive_expressionContext>(0);
}

CortoParser::Shift_expressionContext* CortoParser::Shift_expressionContext::shift_expression() {
  return getRuleContext<CortoParser::Shift_expressionContext>(0);
}

CortoParser::Shift_operatorContext* CortoParser::Shift_expressionContext::shift_operator() {
  return getRuleContext<CortoParser::Shift_operatorContext>(0);
}


size_t CortoParser::Shift_expressionContext::getRuleIndex() const {
  return CortoParser::RuleShift_expression;
}

void CortoParser::Shift_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShift_expression(this);
}

void CortoParser::Shift_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShift_expression(this);
}


antlrcpp::Any CortoParser::Shift_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitShift_expression(this);
  else
    return visitor->visitChildren(this);
}


CortoParser::Shift_expressionContext* CortoParser::shift_expression() {
   return shift_expression(0);
}

CortoParser::Shift_expressionContext* CortoParser::shift_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CortoParser::Shift_expressionContext *_localctx = _tracker.createInstance<Shift_expressionContext>(_ctx, parentState);
  CortoParser::Shift_expressionContext *previousContext = _localctx;
  size_t startState = 44;
  enterRecursionRule(_localctx, 44, CortoParser::RuleShift_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(277);
    additive_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(285);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Shift_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleShift_expression);
        setState(279);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(280);
        shift_operator();
        setState(281);
        additive_expression(0); 
      }
      setState(287);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Shift_operatorContext ------------------------------------------------------------------

CortoParser::Shift_operatorContext::Shift_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CortoParser::Shift_operatorContext::getRuleIndex() const {
  return CortoParser::RuleShift_operator;
}

void CortoParser::Shift_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShift_operator(this);
}

void CortoParser::Shift_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShift_operator(this);
}


antlrcpp::Any CortoParser::Shift_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitShift_operator(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Shift_operatorContext* CortoParser::shift_operator() {
  Shift_operatorContext *_localctx = _tracker.createInstance<Shift_operatorContext>(_ctx, getState());
  enterRule(_localctx, 46, CortoParser::RuleShift_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(288);
    _la = _input->LA(1);
    if (!(_la == CortoParser::T__25

    || _la == CortoParser::T__26)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Additive_expressionContext ------------------------------------------------------------------

CortoParser::Additive_expressionContext::Additive_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Multiplicative_expressionContext* CortoParser::Additive_expressionContext::multiplicative_expression() {
  return getRuleContext<CortoParser::Multiplicative_expressionContext>(0);
}

CortoParser::Additive_expressionContext* CortoParser::Additive_expressionContext::additive_expression() {
  return getRuleContext<CortoParser::Additive_expressionContext>(0);
}

CortoParser::Additive_operatorContext* CortoParser::Additive_expressionContext::additive_operator() {
  return getRuleContext<CortoParser::Additive_operatorContext>(0);
}


size_t CortoParser::Additive_expressionContext::getRuleIndex() const {
  return CortoParser::RuleAdditive_expression;
}

void CortoParser::Additive_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditive_expression(this);
}

void CortoParser::Additive_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditive_expression(this);
}


antlrcpp::Any CortoParser::Additive_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitAdditive_expression(this);
  else
    return visitor->visitChildren(this);
}


CortoParser::Additive_expressionContext* CortoParser::additive_expression() {
   return additive_expression(0);
}

CortoParser::Additive_expressionContext* CortoParser::additive_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CortoParser::Additive_expressionContext *_localctx = _tracker.createInstance<Additive_expressionContext>(_ctx, parentState);
  CortoParser::Additive_expressionContext *previousContext = _localctx;
  size_t startState = 48;
  enterRecursionRule(_localctx, 48, CortoParser::RuleAdditive_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(291);
    multiplicative_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(299);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Additive_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAdditive_expression);
        setState(293);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(294);
        additive_operator();
        setState(295);
        multiplicative_expression(0); 
      }
      setState(301);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Additive_operatorContext ------------------------------------------------------------------

CortoParser::Additive_operatorContext::Additive_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CortoParser::Additive_operatorContext::getRuleIndex() const {
  return CortoParser::RuleAdditive_operator;
}

void CortoParser::Additive_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditive_operator(this);
}

void CortoParser::Additive_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditive_operator(this);
}


antlrcpp::Any CortoParser::Additive_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitAdditive_operator(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Additive_operatorContext* CortoParser::additive_operator() {
  Additive_operatorContext *_localctx = _tracker.createInstance<Additive_operatorContext>(_ctx, getState());
  enterRule(_localctx, 50, CortoParser::RuleAdditive_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(302);
    _la = _input->LA(1);
    if (!(_la == CortoParser::T__27

    || _la == CortoParser::T__28)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Multiplicative_expressionContext ------------------------------------------------------------------

CortoParser::Multiplicative_expressionContext::Multiplicative_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Cast_expressionContext* CortoParser::Multiplicative_expressionContext::cast_expression() {
  return getRuleContext<CortoParser::Cast_expressionContext>(0);
}

CortoParser::Multiplicative_expressionContext* CortoParser::Multiplicative_expressionContext::multiplicative_expression() {
  return getRuleContext<CortoParser::Multiplicative_expressionContext>(0);
}

CortoParser::Multiplicative_operatorContext* CortoParser::Multiplicative_expressionContext::multiplicative_operator() {
  return getRuleContext<CortoParser::Multiplicative_operatorContext>(0);
}


size_t CortoParser::Multiplicative_expressionContext::getRuleIndex() const {
  return CortoParser::RuleMultiplicative_expression;
}

void CortoParser::Multiplicative_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicative_expression(this);
}

void CortoParser::Multiplicative_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicative_expression(this);
}


antlrcpp::Any CortoParser::Multiplicative_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitMultiplicative_expression(this);
  else
    return visitor->visitChildren(this);
}


CortoParser::Multiplicative_expressionContext* CortoParser::multiplicative_expression() {
   return multiplicative_expression(0);
}

CortoParser::Multiplicative_expressionContext* CortoParser::multiplicative_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CortoParser::Multiplicative_expressionContext *_localctx = _tracker.createInstance<Multiplicative_expressionContext>(_ctx, parentState);
  CortoParser::Multiplicative_expressionContext *previousContext = _localctx;
  size_t startState = 52;
  enterRecursionRule(_localctx, 52, CortoParser::RuleMultiplicative_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(305);
    cast_expression();
    _ctx->stop = _input->LT(-1);
    setState(313);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Multiplicative_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleMultiplicative_expression);
        setState(307);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(308);
        multiplicative_operator();
        setState(309);
        cast_expression(); 
      }
      setState(315);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Multiplicative_operatorContext ------------------------------------------------------------------

CortoParser::Multiplicative_operatorContext::Multiplicative_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CortoParser::Multiplicative_operatorContext::getRuleIndex() const {
  return CortoParser::RuleMultiplicative_operator;
}

void CortoParser::Multiplicative_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicative_operator(this);
}

void CortoParser::Multiplicative_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicative_operator(this);
}


antlrcpp::Any CortoParser::Multiplicative_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitMultiplicative_operator(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Multiplicative_operatorContext* CortoParser::multiplicative_operator() {
  Multiplicative_operatorContext *_localctx = _tracker.createInstance<Multiplicative_operatorContext>(_ctx, getState());
  enterRule(_localctx, 54, CortoParser::RuleMultiplicative_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(316);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CortoParser::T__29)
      | (1ULL << CortoParser::T__30)
      | (1ULL << CortoParser::T__31))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cast_expressionContext ------------------------------------------------------------------

CortoParser::Cast_expressionContext::Cast_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Unary_expressionContext* CortoParser::Cast_expressionContext::unary_expression() {
  return getRuleContext<CortoParser::Unary_expressionContext>(0);
}

tree::TerminalNode* CortoParser::Cast_expressionContext::LPAREN() {
  return getToken(CortoParser::LPAREN, 0);
}

CortoParser::Storage_expressionContext* CortoParser::Cast_expressionContext::storage_expression() {
  return getRuleContext<CortoParser::Storage_expressionContext>(0);
}

tree::TerminalNode* CortoParser::Cast_expressionContext::RPAREN() {
  return getToken(CortoParser::RPAREN, 0);
}

CortoParser::Cast_expressionContext* CortoParser::Cast_expressionContext::cast_expression() {
  return getRuleContext<CortoParser::Cast_expressionContext>(0);
}


size_t CortoParser::Cast_expressionContext::getRuleIndex() const {
  return CortoParser::RuleCast_expression;
}

void CortoParser::Cast_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCast_expression(this);
}

void CortoParser::Cast_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCast_expression(this);
}


antlrcpp::Any CortoParser::Cast_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitCast_expression(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Cast_expressionContext* CortoParser::cast_expression() {
  Cast_expressionContext *_localctx = _tracker.createInstance<Cast_expressionContext>(_ctx, getState());
  enterRule(_localctx, 56, CortoParser::RuleCast_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(324);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(318);
      unary_expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(319);
      match(CortoParser::LPAREN);
      setState(320);
      storage_expression(0);
      setState(321);
      match(CortoParser::RPAREN);
      setState(322);
      cast_expression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unary_expressionContext ------------------------------------------------------------------

CortoParser::Unary_expressionContext::Unary_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Postfix_expressionContext* CortoParser::Unary_expressionContext::postfix_expression() {
  return getRuleContext<CortoParser::Postfix_expressionContext>(0);
}

CortoParser::Inc_operatorContext* CortoParser::Unary_expressionContext::inc_operator() {
  return getRuleContext<CortoParser::Inc_operatorContext>(0);
}

CortoParser::Unary_expressionContext* CortoParser::Unary_expressionContext::unary_expression() {
  return getRuleContext<CortoParser::Unary_expressionContext>(0);
}

CortoParser::Unary_operatorContext* CortoParser::Unary_expressionContext::unary_operator() {
  return getRuleContext<CortoParser::Unary_operatorContext>(0);
}

CortoParser::Cast_expressionContext* CortoParser::Unary_expressionContext::cast_expression() {
  return getRuleContext<CortoParser::Cast_expressionContext>(0);
}


size_t CortoParser::Unary_expressionContext::getRuleIndex() const {
  return CortoParser::RuleUnary_expression;
}

void CortoParser::Unary_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary_expression(this);
}

void CortoParser::Unary_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary_expression(this);
}


antlrcpp::Any CortoParser::Unary_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitUnary_expression(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Unary_expressionContext* CortoParser::unary_expression() {
  Unary_expressionContext *_localctx = _tracker.createInstance<Unary_expressionContext>(_ctx, getState());
  enterRule(_localctx, 58, CortoParser::RuleUnary_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(333);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CortoParser::BOOLEAN:
      case CortoParser::NULL_LITERAL:
      case CortoParser::SCOPE_IDENTIFIER:
      case CortoParser::IDENTIFIER:
      case CortoParser::HEXADECIMAL:
      case CortoParser::SIGNED_INTEGER_MEASUREMENT:
      case CortoParser::INTEGER_MEASUREMENT:
      case CortoParser::FLOATING_POINT_MEASUREMENT:
      case CortoParser::INTEGER:
      case CortoParser::SIGNED_INTEGER:
      case CortoParser::FLOATING_POINT:
      case CortoParser::STRING:
      case CortoParser::LPAREN: {
        enterOuterAlt(_localctx, 1);
        setState(326);
        postfix_expression(0);
        break;
      }

      case CortoParser::T__33:
      case CortoParser::T__34: {
        enterOuterAlt(_localctx, 2);
        setState(327);
        inc_operator();
        setState(328);
        unary_expression();
        break;
      }

      case CortoParser::T__18:
      case CortoParser::T__27:
      case CortoParser::T__28:
      case CortoParser::T__29:
      case CortoParser::T__32:
      case CortoParser::COND_NOT: {
        enterOuterAlt(_localctx, 3);
        setState(330);
        unary_operator();
        setState(331);
        cast_expression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unary_operatorContext ------------------------------------------------------------------

CortoParser::Unary_operatorContext::Unary_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CortoParser::Unary_operatorContext::COND_NOT() {
  return getToken(CortoParser::COND_NOT, 0);
}


size_t CortoParser::Unary_operatorContext::getRuleIndex() const {
  return CortoParser::RuleUnary_operator;
}

void CortoParser::Unary_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary_operator(this);
}

void CortoParser::Unary_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary_operator(this);
}


antlrcpp::Any CortoParser::Unary_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitUnary_operator(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Unary_operatorContext* CortoParser::unary_operator() {
  Unary_operatorContext *_localctx = _tracker.createInstance<Unary_operatorContext>(_ctx, getState());
  enterRule(_localctx, 60, CortoParser::RuleUnary_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(335);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CortoParser::T__18)
      | (1ULL << CortoParser::T__27)
      | (1ULL << CortoParser::T__28)
      | (1ULL << CortoParser::T__29)
      | (1ULL << CortoParser::T__32)
      | (1ULL << CortoParser::COND_NOT))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Postfix_expressionContext ------------------------------------------------------------------

CortoParser::Postfix_expressionContext::Postfix_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Primary_expressionContext* CortoParser::Postfix_expressionContext::primary_expression() {
  return getRuleContext<CortoParser::Primary_expressionContext>(0);
}

CortoParser::Storage_expressionContext* CortoParser::Postfix_expressionContext::storage_expression() {
  return getRuleContext<CortoParser::Storage_expressionContext>(0);
}

tree::TerminalNode* CortoParser::Postfix_expressionContext::LPAREN() {
  return getToken(CortoParser::LPAREN, 0);
}

CortoParser::ExpressionContext* CortoParser::Postfix_expressionContext::expression() {
  return getRuleContext<CortoParser::ExpressionContext>(0);
}

tree::TerminalNode* CortoParser::Postfix_expressionContext::RPAREN() {
  return getToken(CortoParser::RPAREN, 0);
}

CortoParser::Postfix_expressionContext* CortoParser::Postfix_expressionContext::postfix_expression() {
  return getRuleContext<CortoParser::Postfix_expressionContext>(0);
}

CortoParser::Inc_operatorContext* CortoParser::Postfix_expressionContext::inc_operator() {
  return getRuleContext<CortoParser::Inc_operatorContext>(0);
}


size_t CortoParser::Postfix_expressionContext::getRuleIndex() const {
  return CortoParser::RulePostfix_expression;
}

void CortoParser::Postfix_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfix_expression(this);
}

void CortoParser::Postfix_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfix_expression(this);
}


antlrcpp::Any CortoParser::Postfix_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitPostfix_expression(this);
  else
    return visitor->visitChildren(this);
}


CortoParser::Postfix_expressionContext* CortoParser::postfix_expression() {
   return postfix_expression(0);
}

CortoParser::Postfix_expressionContext* CortoParser::postfix_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CortoParser::Postfix_expressionContext *_localctx = _tracker.createInstance<Postfix_expressionContext>(_ctx, parentState);
  CortoParser::Postfix_expressionContext *previousContext = _localctx;
  size_t startState = 62;
  enterRecursionRule(_localctx, 62, CortoParser::RulePostfix_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(344);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CortoParser::BOOLEAN:
      case CortoParser::NULL_LITERAL:
      case CortoParser::HEXADECIMAL:
      case CortoParser::SIGNED_INTEGER_MEASUREMENT:
      case CortoParser::INTEGER_MEASUREMENT:
      case CortoParser::FLOATING_POINT_MEASUREMENT:
      case CortoParser::INTEGER:
      case CortoParser::SIGNED_INTEGER:
      case CortoParser::FLOATING_POINT:
      case CortoParser::STRING: {
        setState(338);
        primary_expression();
        break;
      }

      case CortoParser::SCOPE_IDENTIFIER:
      case CortoParser::IDENTIFIER: {
        setState(339);
        storage_expression(0);
        break;
      }

      case CortoParser::LPAREN: {
        setState(340);
        match(CortoParser::LPAREN);
        setState(341);
        expression();
        setState(342);
        match(CortoParser::RPAREN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(350);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Postfix_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RulePostfix_expression);
        setState(346);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(347);
        inc_operator(); 
      }
      setState(352);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Inc_operatorContext ------------------------------------------------------------------

CortoParser::Inc_operatorContext::Inc_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CortoParser::Inc_operatorContext::getRuleIndex() const {
  return CortoParser::RuleInc_operator;
}

void CortoParser::Inc_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInc_operator(this);
}

void CortoParser::Inc_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInc_operator(this);
}


antlrcpp::Any CortoParser::Inc_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitInc_operator(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Inc_operatorContext* CortoParser::inc_operator() {
  Inc_operatorContext *_localctx = _tracker.createInstance<Inc_operatorContext>(_ctx, getState());
  enterRule(_localctx, 64, CortoParser::RuleInc_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(353);
    _la = _input->LA(1);
    if (!(_la == CortoParser::T__33

    || _la == CortoParser::T__34)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Storage_expressionContext ------------------------------------------------------------------

CortoParser::Storage_expressionContext::Storage_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Storage_identifierContext* CortoParser::Storage_expressionContext::storage_identifier() {
  return getRuleContext<CortoParser::Storage_identifierContext>(0);
}

CortoParser::Storage_expressionContext* CortoParser::Storage_expressionContext::storage_expression() {
  return getRuleContext<CortoParser::Storage_expressionContext>(0);
}

CortoParser::Initializer_expressionContext* CortoParser::Storage_expressionContext::initializer_expression() {
  return getRuleContext<CortoParser::Initializer_expressionContext>(0);
}

tree::TerminalNode* CortoParser::Storage_expressionContext::IDENTIFIER() {
  return getToken(CortoParser::IDENTIFIER, 0);
}


size_t CortoParser::Storage_expressionContext::getRuleIndex() const {
  return CortoParser::RuleStorage_expression;
}

void CortoParser::Storage_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStorage_expression(this);
}

void CortoParser::Storage_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStorage_expression(this);
}


antlrcpp::Any CortoParser::Storage_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitStorage_expression(this);
  else
    return visitor->visitChildren(this);
}


CortoParser::Storage_expressionContext* CortoParser::storage_expression() {
   return storage_expression(0);
}

CortoParser::Storage_expressionContext* CortoParser::storage_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CortoParser::Storage_expressionContext *_localctx = _tracker.createInstance<Storage_expressionContext>(_ctx, parentState);
  CortoParser::Storage_expressionContext *previousContext = _localctx;
  size_t startState = 66;
  enterRecursionRule(_localctx, 66, CortoParser::RuleStorage_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(356);
    storage_identifier();
    _ctx->stop = _input->LT(-1);
    setState(365);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(363);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Storage_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleStorage_expression);
          setState(358);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(359);
          initializer_expression();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Storage_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleStorage_expression);
          setState(360);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(361);
          match(CortoParser::T__35);
          setState(362);
          match(CortoParser::IDENTIFIER);
          break;
        }

        } 
      }
      setState(367);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Initializer_assignmentContext ------------------------------------------------------------------

CortoParser::Initializer_assignmentContext::Initializer_assignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Initializer_expressionContext* CortoParser::Initializer_assignmentContext::initializer_expression() {
  return getRuleContext<CortoParser::Initializer_expressionContext>(0);
}

CortoParser::Initializer_shorthandContext* CortoParser::Initializer_assignmentContext::initializer_shorthand() {
  return getRuleContext<CortoParser::Initializer_shorthandContext>(0);
}


size_t CortoParser::Initializer_assignmentContext::getRuleIndex() const {
  return CortoParser::RuleInitializer_assignment;
}

void CortoParser::Initializer_assignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer_assignment(this);
}

void CortoParser::Initializer_assignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer_assignment(this);
}


antlrcpp::Any CortoParser::Initializer_assignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitInitializer_assignment(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Initializer_assignmentContext* CortoParser::initializer_assignment() {
  Initializer_assignmentContext *_localctx = _tracker.createInstance<Initializer_assignmentContext>(_ctx, getState());
  enterRule(_localctx, 68, CortoParser::RuleInitializer_assignment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(370);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CortoParser::LPAREN:
      case CortoParser::LBRACK: {
        enterOuterAlt(_localctx, 1);
        setState(368);
        initializer_expression();
        break;
      }

      case CortoParser::T__16: {
        enterOuterAlt(_localctx, 2);
        setState(369);
        initializer_shorthand();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Initializer_shorthandContext ------------------------------------------------------------------

CortoParser::Initializer_shorthandContext::Initializer_shorthandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Initializer_listContext* CortoParser::Initializer_shorthandContext::initializer_list() {
  return getRuleContext<CortoParser::Initializer_listContext>(0);
}


size_t CortoParser::Initializer_shorthandContext::getRuleIndex() const {
  return CortoParser::RuleInitializer_shorthand;
}

void CortoParser::Initializer_shorthandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer_shorthand(this);
}

void CortoParser::Initializer_shorthandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer_shorthand(this);
}


antlrcpp::Any CortoParser::Initializer_shorthandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitInitializer_shorthand(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Initializer_shorthandContext* CortoParser::initializer_shorthand() {
  Initializer_shorthandContext *_localctx = _tracker.createInstance<Initializer_shorthandContext>(_ctx, getState());
  enterRule(_localctx, 70, CortoParser::RuleInitializer_shorthand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(372);
    match(CortoParser::T__16);
    setState(373);
    initializer_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Initializer_expressionContext ------------------------------------------------------------------

CortoParser::Initializer_expressionContext::Initializer_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Initializer_compositeContext* CortoParser::Initializer_expressionContext::initializer_composite() {
  return getRuleContext<CortoParser::Initializer_compositeContext>(0);
}

CortoParser::Initializer_collectionContext* CortoParser::Initializer_expressionContext::initializer_collection() {
  return getRuleContext<CortoParser::Initializer_collectionContext>(0);
}


size_t CortoParser::Initializer_expressionContext::getRuleIndex() const {
  return CortoParser::RuleInitializer_expression;
}

void CortoParser::Initializer_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer_expression(this);
}

void CortoParser::Initializer_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer_expression(this);
}


antlrcpp::Any CortoParser::Initializer_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitInitializer_expression(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Initializer_expressionContext* CortoParser::initializer_expression() {
  Initializer_expressionContext *_localctx = _tracker.createInstance<Initializer_expressionContext>(_ctx, getState());
  enterRule(_localctx, 72, CortoParser::RuleInitializer_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(377);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CortoParser::LPAREN: {
        enterOuterAlt(_localctx, 1);
        setState(375);
        initializer_composite();
        break;
      }

      case CortoParser::LBRACK: {
        enterOuterAlt(_localctx, 2);
        setState(376);
        initializer_collection();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Initializer_compositeContext ------------------------------------------------------------------

CortoParser::Initializer_compositeContext::Initializer_compositeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CortoParser::Initializer_compositeContext::LPAREN() {
  return getToken(CortoParser::LPAREN, 0);
}

tree::TerminalNode* CortoParser::Initializer_compositeContext::RPAREN() {
  return getToken(CortoParser::RPAREN, 0);
}

CortoParser::Initializer_listContext* CortoParser::Initializer_compositeContext::initializer_list() {
  return getRuleContext<CortoParser::Initializer_listContext>(0);
}


size_t CortoParser::Initializer_compositeContext::getRuleIndex() const {
  return CortoParser::RuleInitializer_composite;
}

void CortoParser::Initializer_compositeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer_composite(this);
}

void CortoParser::Initializer_compositeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer_composite(this);
}


antlrcpp::Any CortoParser::Initializer_compositeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitInitializer_composite(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Initializer_compositeContext* CortoParser::initializer_composite() {
  Initializer_compositeContext *_localctx = _tracker.createInstance<Initializer_compositeContext>(_ctx, getState());
  enterRule(_localctx, 74, CortoParser::RuleInitializer_composite);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(379);
    match(CortoParser::LPAREN);
    setState(381);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CortoParser::T__18)
      | (1ULL << CortoParser::T__27)
      | (1ULL << CortoParser::T__28)
      | (1ULL << CortoParser::T__29)
      | (1ULL << CortoParser::T__32)
      | (1ULL << CortoParser::T__33)
      | (1ULL << CortoParser::T__34)
      | (1ULL << CortoParser::BOOLEAN)
      | (1ULL << CortoParser::NULL_LITERAL)
      | (1ULL << CortoParser::COND_NOT)
      | (1ULL << CortoParser::SCOPE_IDENTIFIER)
      | (1ULL << CortoParser::IDENTIFIER)
      | (1ULL << CortoParser::HEXADECIMAL)
      | (1ULL << CortoParser::SIGNED_INTEGER_MEASUREMENT)
      | (1ULL << CortoParser::INTEGER_MEASUREMENT)
      | (1ULL << CortoParser::FLOATING_POINT_MEASUREMENT)
      | (1ULL << CortoParser::INTEGER)
      | (1ULL << CortoParser::SIGNED_INTEGER)
      | (1ULL << CortoParser::FLOATING_POINT)
      | (1ULL << CortoParser::STRING)
      | (1ULL << CortoParser::LPAREN)
      | (1ULL << CortoParser::LBRACK))) != 0)) {
      setState(380);
      initializer_list();
    }
    setState(383);
    match(CortoParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Initializer_collectionContext ------------------------------------------------------------------

CortoParser::Initializer_collectionContext::Initializer_collectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CortoParser::Initializer_collectionContext::LBRACK() {
  return getToken(CortoParser::LBRACK, 0);
}

tree::TerminalNode* CortoParser::Initializer_collectionContext::RBRACK() {
  return getToken(CortoParser::RBRACK, 0);
}

CortoParser::Initializer_listContext* CortoParser::Initializer_collectionContext::initializer_list() {
  return getRuleContext<CortoParser::Initializer_listContext>(0);
}


size_t CortoParser::Initializer_collectionContext::getRuleIndex() const {
  return CortoParser::RuleInitializer_collection;
}

void CortoParser::Initializer_collectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer_collection(this);
}

void CortoParser::Initializer_collectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer_collection(this);
}


antlrcpp::Any CortoParser::Initializer_collectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitInitializer_collection(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Initializer_collectionContext* CortoParser::initializer_collection() {
  Initializer_collectionContext *_localctx = _tracker.createInstance<Initializer_collectionContext>(_ctx, getState());
  enterRule(_localctx, 76, CortoParser::RuleInitializer_collection);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(385);
    match(CortoParser::LBRACK);
    setState(387);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CortoParser::T__18)
      | (1ULL << CortoParser::T__27)
      | (1ULL << CortoParser::T__28)
      | (1ULL << CortoParser::T__29)
      | (1ULL << CortoParser::T__32)
      | (1ULL << CortoParser::T__33)
      | (1ULL << CortoParser::T__34)
      | (1ULL << CortoParser::BOOLEAN)
      | (1ULL << CortoParser::NULL_LITERAL)
      | (1ULL << CortoParser::COND_NOT)
      | (1ULL << CortoParser::SCOPE_IDENTIFIER)
      | (1ULL << CortoParser::IDENTIFIER)
      | (1ULL << CortoParser::HEXADECIMAL)
      | (1ULL << CortoParser::SIGNED_INTEGER_MEASUREMENT)
      | (1ULL << CortoParser::INTEGER_MEASUREMENT)
      | (1ULL << CortoParser::FLOATING_POINT_MEASUREMENT)
      | (1ULL << CortoParser::INTEGER)
      | (1ULL << CortoParser::SIGNED_INTEGER)
      | (1ULL << CortoParser::FLOATING_POINT)
      | (1ULL << CortoParser::STRING)
      | (1ULL << CortoParser::LPAREN)
      | (1ULL << CortoParser::LBRACK))) != 0)) {
      setState(386);
      initializer_list();
    }
    setState(389);
    match(CortoParser::RBRACK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Initializer_listContext ------------------------------------------------------------------

CortoParser::Initializer_listContext::Initializer_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CortoParser::Initializer_valueContext *> CortoParser::Initializer_listContext::initializer_value() {
  return getRuleContexts<CortoParser::Initializer_valueContext>();
}

CortoParser::Initializer_valueContext* CortoParser::Initializer_listContext::initializer_value(size_t i) {
  return getRuleContext<CortoParser::Initializer_valueContext>(i);
}


size_t CortoParser::Initializer_listContext::getRuleIndex() const {
  return CortoParser::RuleInitializer_list;
}

void CortoParser::Initializer_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer_list(this);
}

void CortoParser::Initializer_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer_list(this);
}


antlrcpp::Any CortoParser::Initializer_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitInitializer_list(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Initializer_listContext* CortoParser::initializer_list() {
  Initializer_listContext *_localctx = _tracker.createInstance<Initializer_listContext>(_ctx, getState());
  enterRule(_localctx, 78, CortoParser::RuleInitializer_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(391);
    initializer_value();
    setState(396);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CortoParser::T__0) {
      setState(392);
      match(CortoParser::T__0);
      setState(393);
      initializer_value();
      setState(398);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Initializer_valueContext ------------------------------------------------------------------

CortoParser::Initializer_valueContext::Initializer_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Initializer_keyContext* CortoParser::Initializer_valueContext::initializer_key() {
  return getRuleContext<CortoParser::Initializer_keyContext>(0);
}

CortoParser::Initializer_expressionContext* CortoParser::Initializer_valueContext::initializer_expression() {
  return getRuleContext<CortoParser::Initializer_expressionContext>(0);
}

CortoParser::ExpressionContext* CortoParser::Initializer_valueContext::expression() {
  return getRuleContext<CortoParser::ExpressionContext>(0);
}


size_t CortoParser::Initializer_valueContext::getRuleIndex() const {
  return CortoParser::RuleInitializer_value;
}

void CortoParser::Initializer_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer_value(this);
}

void CortoParser::Initializer_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer_value(this);
}


antlrcpp::Any CortoParser::Initializer_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitInitializer_value(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Initializer_valueContext* CortoParser::initializer_value() {
  Initializer_valueContext *_localctx = _tracker.createInstance<Initializer_valueContext>(_ctx, getState());
  enterRule(_localctx, 80, CortoParser::RuleInitializer_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(407);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(399);
      initializer_key();
      setState(403);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CortoParser::LPAREN:
        case CortoParser::LBRACK: {
          setState(400);
          initializer_expression();
          break;
        }

        case CortoParser::T__16: {
          setState(401);
          match(CortoParser::T__16);
          setState(402);
          expression();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(405);
      initializer_expression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(406);
      expression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Initializer_keyContext ------------------------------------------------------------------

CortoParser::Initializer_keyContext::Initializer_keyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CortoParser::Initializer_keyContext::IDENTIFIER() {
  return getTokens(CortoParser::IDENTIFIER);
}

tree::TerminalNode* CortoParser::Initializer_keyContext::IDENTIFIER(size_t i) {
  return getToken(CortoParser::IDENTIFIER, i);
}

CortoParser::LiteralContext* CortoParser::Initializer_keyContext::literal() {
  return getRuleContext<CortoParser::LiteralContext>(0);
}

CortoParser::Storage_identifierContext* CortoParser::Initializer_keyContext::storage_identifier() {
  return getRuleContext<CortoParser::Storage_identifierContext>(0);
}


size_t CortoParser::Initializer_keyContext::getRuleIndex() const {
  return CortoParser::RuleInitializer_key;
}

void CortoParser::Initializer_keyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer_key(this);
}

void CortoParser::Initializer_keyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer_key(this);
}


antlrcpp::Any CortoParser::Initializer_keyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitInitializer_key(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Initializer_keyContext* CortoParser::initializer_key() {
  Initializer_keyContext *_localctx = _tracker.createInstance<Initializer_keyContext>(_ctx, getState());
  enterRule(_localctx, 82, CortoParser::RuleInitializer_key);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(419);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(409);
      match(CortoParser::IDENTIFIER);
      setState(414);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CortoParser::T__35) {
        setState(410);
        match(CortoParser::T__35);
        setState(411);
        match(CortoParser::IDENTIFIER);
        setState(416);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(417);
      literal();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(418);
      storage_identifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Primary_expressionContext ------------------------------------------------------------------

CortoParser::Primary_expressionContext::Primary_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::LiteralContext* CortoParser::Primary_expressionContext::literal() {
  return getRuleContext<CortoParser::LiteralContext>(0);
}


size_t CortoParser::Primary_expressionContext::getRuleIndex() const {
  return CortoParser::RulePrimary_expression;
}

void CortoParser::Primary_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimary_expression(this);
}

void CortoParser::Primary_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimary_expression(this);
}


antlrcpp::Any CortoParser::Primary_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitPrimary_expression(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Primary_expressionContext* CortoParser::primary_expression() {
  Primary_expressionContext *_localctx = _tracker.createInstance<Primary_expressionContext>(_ctx, getState());
  enterRule(_localctx, 84, CortoParser::RulePrimary_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(421);
    literal();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

CortoParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CortoParser::LiteralContext::BOOLEAN() {
  return getToken(CortoParser::BOOLEAN, 0);
}

tree::TerminalNode* CortoParser::LiteralContext::HEXADECIMAL() {
  return getToken(CortoParser::HEXADECIMAL, 0);
}

tree::TerminalNode* CortoParser::LiteralContext::FLOATING_POINT_MEASUREMENT() {
  return getToken(CortoParser::FLOATING_POINT_MEASUREMENT, 0);
}

tree::TerminalNode* CortoParser::LiteralContext::SIGNED_INTEGER_MEASUREMENT() {
  return getToken(CortoParser::SIGNED_INTEGER_MEASUREMENT, 0);
}

tree::TerminalNode* CortoParser::LiteralContext::INTEGER_MEASUREMENT() {
  return getToken(CortoParser::INTEGER_MEASUREMENT, 0);
}

tree::TerminalNode* CortoParser::LiteralContext::SIGNED_INTEGER() {
  return getToken(CortoParser::SIGNED_INTEGER, 0);
}

tree::TerminalNode* CortoParser::LiteralContext::FLOATING_POINT() {
  return getToken(CortoParser::FLOATING_POINT, 0);
}

tree::TerminalNode* CortoParser::LiteralContext::INTEGER() {
  return getToken(CortoParser::INTEGER, 0);
}

tree::TerminalNode* CortoParser::LiteralContext::STRING() {
  return getToken(CortoParser::STRING, 0);
}

tree::TerminalNode* CortoParser::LiteralContext::NULL_LITERAL() {
  return getToken(CortoParser::NULL_LITERAL, 0);
}


size_t CortoParser::LiteralContext::getRuleIndex() const {
  return CortoParser::RuleLiteral;
}

void CortoParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void CortoParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}


antlrcpp::Any CortoParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::LiteralContext* CortoParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 86, CortoParser::RuleLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(423);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CortoParser::BOOLEAN)
      | (1ULL << CortoParser::NULL_LITERAL)
      | (1ULL << CortoParser::HEXADECIMAL)
      | (1ULL << CortoParser::SIGNED_INTEGER_MEASUREMENT)
      | (1ULL << CortoParser::INTEGER_MEASUREMENT)
      | (1ULL << CortoParser::FLOATING_POINT_MEASUREMENT)
      | (1ULL << CortoParser::INTEGER)
      | (1ULL << CortoParser::SIGNED_INTEGER)
      | (1ULL << CortoParser::FLOATING_POINT)
      | (1ULL << CortoParser::STRING))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Storage_identifierContext ------------------------------------------------------------------

CortoParser::Storage_identifierContext::Storage_identifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CortoParser::Storage_identifierContext::IDENTIFIER() {
  return getToken(CortoParser::IDENTIFIER, 0);
}

tree::TerminalNode* CortoParser::Storage_identifierContext::SCOPE_IDENTIFIER() {
  return getToken(CortoParser::SCOPE_IDENTIFIER, 0);
}


size_t CortoParser::Storage_identifierContext::getRuleIndex() const {
  return CortoParser::RuleStorage_identifier;
}

void CortoParser::Storage_identifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStorage_identifier(this);
}

void CortoParser::Storage_identifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStorage_identifier(this);
}


antlrcpp::Any CortoParser::Storage_identifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitStorage_identifier(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Storage_identifierContext* CortoParser::storage_identifier() {
  Storage_identifierContext *_localctx = _tracker.createInstance<Storage_identifierContext>(_ctx, getState());
  enterRule(_localctx, 88, CortoParser::RuleStorage_identifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(425);
    _la = _input->LA(1);
    if (!(_la == CortoParser::SCOPE_IDENTIFIER

    || _la == CortoParser::IDENTIFIER)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EolContext ------------------------------------------------------------------

CortoParser::EolContext::EolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CortoParser::EolContext::NL() {
  return getToken(CortoParser::NL, 0);
}

tree::TerminalNode* CortoParser::EolContext::EOF() {
  return getToken(CortoParser::EOF, 0);
}


size_t CortoParser::EolContext::getRuleIndex() const {
  return CortoParser::RuleEol;
}

void CortoParser::EolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEol(this);
}

void CortoParser::EolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEol(this);
}


antlrcpp::Any CortoParser::EolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitEol(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::EolContext* CortoParser::eol() {
  EolContext *_localctx = _tracker.createInstance<EolContext>(_ctx, getState());
  enterRule(_localctx, 90, CortoParser::RuleEol);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(427);
    _la = _input->LA(1);
    if (!(((((_la - -1) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - -1)) & ((1ULL << (CortoParser::EOF - -1))
      | (1ULL << (CortoParser::T__36 - -1))
      | (1ULL << (CortoParser::NL - -1)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool CortoParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 13: return logical_or_expressionSempred(dynamic_cast<Logical_or_expressionContext *>(context), predicateIndex);
    case 14: return logical_and_expressionSempred(dynamic_cast<Logical_and_expressionContext *>(context), predicateIndex);
    case 15: return or_expressionSempred(dynamic_cast<Or_expressionContext *>(context), predicateIndex);
    case 16: return xor_expressionSempred(dynamic_cast<Xor_expressionContext *>(context), predicateIndex);
    case 17: return and_expressionSempred(dynamic_cast<And_expressionContext *>(context), predicateIndex);
    case 18: return equality_expressionSempred(dynamic_cast<Equality_expressionContext *>(context), predicateIndex);
    case 20: return relational_expressionSempred(dynamic_cast<Relational_expressionContext *>(context), predicateIndex);
    case 22: return shift_expressionSempred(dynamic_cast<Shift_expressionContext *>(context), predicateIndex);
    case 24: return additive_expressionSempred(dynamic_cast<Additive_expressionContext *>(context), predicateIndex);
    case 26: return multiplicative_expressionSempred(dynamic_cast<Multiplicative_expressionContext *>(context), predicateIndex);
    case 31: return postfix_expressionSempred(dynamic_cast<Postfix_expressionContext *>(context), predicateIndex);
    case 33: return storage_expressionSempred(dynamic_cast<Storage_expressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CortoParser::logical_or_expressionSempred(Logical_or_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CortoParser::logical_and_expressionSempred(Logical_and_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CortoParser::or_expressionSempred(Or_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CortoParser::xor_expressionSempred(Xor_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CortoParser::and_expressionSempred(And_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CortoParser::equality_expressionSempred(Equality_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CortoParser::relational_expressionSempred(Relational_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CortoParser::shift_expressionSempred(Shift_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CortoParser::additive_expressionSempred(Additive_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CortoParser::multiplicative_expressionSempred(Multiplicative_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 9: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CortoParser::postfix_expressionSempred(Postfix_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 10: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CortoParser::storage_expressionSempred(Storage_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 11: return precpred(_ctx, 2);
    case 12: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> CortoParser::_decisionToDFA;
atn::PredictionContextCache CortoParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CortoParser::_atn;
std::vector<uint16_t> CortoParser::_serializedATN;

std::vector<std::string> CortoParser::_ruleNames = {
  "program", "statements", "statement", "declaration", "declaration_identifier", 
  "argument_declaration", "argument", "scope", "default_scope_type", "expression", 
  "assignment_expression", "assignment_operator", "conditional_expression", 
  "logical_or_expression", "logical_and_expression", "or_expression", "xor_expression", 
  "and_expression", "equality_expression", "equality_operator", "relational_expression", 
  "relational_operator", "shift_expression", "shift_operator", "additive_expression", 
  "additive_operator", "multiplicative_expression", "multiplicative_operator", 
  "cast_expression", "unary_expression", "unary_operator", "postfix_expression", 
  "inc_operator", "storage_expression", "initializer_assignment", "initializer_shorthand", 
  "initializer_expression", "initializer_composite", "initializer_collection", 
  "initializer_list", "initializer_value", "initializer_key", "primary_expression", 
  "literal", "storage_identifier", "eol"
};

std::vector<std::string> CortoParser::_literalNames = {
  "", "','", "'{'", "'}'", "'|'", "'='", "'*='", "'/='", "'%='", "'+='", 
  "'-='", "'<<='", "'>>='", "'&='", "'^='", "'|='", "'?'", "':'", "'^'", 
  "'&'", "'=='", "'!='", "'<'", "'>'", "'<='", "'>='", "'<<'", "'>>'", "'+'", 
  "'-'", "'*'", "'/'", "'%'", "'~'", "'++'", "'--'", "'.'", "';'", "", "'null'", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "'('", "')'", "'['", 
  "']'"
};

std::vector<std::string> CortoParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "BOOLEAN", "NULL_LITERAL", "COND_AND", "COND_OR", "COND_NOT", 
  "SCOPE_IDENTIFIER", "IDENTIFIER", "HEXADECIMAL", "SIGNED_INTEGER_MEASUREMENT", 
  "INTEGER_MEASUREMENT", "FLOATING_POINT_MEASUREMENT", "INTEGER", "SIGNED_INTEGER", 
  "FLOATING_POINT", "STRING", "LPAREN", "RPAREN", "LBRACK", "RBRACK", "IGNORE_NEWLINE", 
  "NL", "WS"
};

dfa::Vocabulary CortoParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> CortoParser::_tokenNames;

CortoParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x3d, 0x1b0, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x7, 0x3, 0x62, 0xa, 0x3, 0xc, 
    0x3, 0xe, 0x3, 0x65, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x5, 0x4, 0x6c, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 
    0x5, 0x71, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x75, 0xa, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x82, 0xa, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x5, 0x6, 0x86, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x6, 
    0x6, 0x8b, 0xa, 0x6, 0xd, 0x6, 0xe, 0x6, 0x8c, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x6, 0x6, 0x92, 0xa, 0x6, 0xd, 0x6, 0xe, 0x6, 0x93, 0x5, 0x6, 0x96, 
    0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x9c, 0xa, 
    0x7, 0xc, 0x7, 0xe, 0x7, 0x9f, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xa8, 0xa, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 
    0xc, 0xb8, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xc2, 0xa, 0xe, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xca, 0xa, 0xf, 
    0xc, 0xf, 0xe, 0xf, 0xcd, 0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0xd5, 0xa, 0x10, 0xc, 0x10, 
    0xe, 0x10, 0xd8, 0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0xe0, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 
    0xe3, 0xb, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x7, 0x12, 0xeb, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0xee, 0xb, 
    0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x7, 0x13, 0xf6, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0xf9, 0xb, 0x13, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x7, 0x14, 0x102, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x105, 0xb, 0x14, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 0x110, 0xa, 0x16, 0xc, 0x16, 
    0xe, 0x16, 0x113, 0xb, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x11e, 
    0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x121, 0xb, 0x18, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
    0x1a, 0x7, 0x1a, 0x12c, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x12f, 0xb, 
    0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x13a, 0xa, 0x1c, 0xc, 0x1c, 
    0xe, 0x1c, 0x13d, 0xb, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x147, 0xa, 0x1e, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
    0x1f, 0x5, 0x1f, 0x150, 0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 
    0x21, 0x15b, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x15f, 0xa, 
    0x21, 0xc, 0x21, 0xe, 0x21, 0x162, 0xb, 0x21, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 
    0x23, 0x3, 0x23, 0x7, 0x23, 0x16e, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 
    0x171, 0xb, 0x23, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x175, 0xa, 0x24, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x17c, 
    0xa, 0x26, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x180, 0xa, 0x27, 0x3, 0x27, 
    0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x186, 0xa, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x7, 0x29, 0x18d, 0xa, 0x29, 
    0xc, 0x29, 0xe, 0x29, 0x190, 0xb, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
    0x3, 0x2a, 0x5, 0x2a, 0x196, 0xa, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 
    0x19a, 0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x7, 0x2b, 0x19f, 
    0xa, 0x2b, 0xc, 0x2b, 0xe, 0x2b, 0x1a2, 0xb, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x5, 0x2b, 0x1a6, 0xa, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x2, 0xe, 0x1c, 
    0x1e, 0x20, 0x22, 0x24, 0x26, 0x2a, 0x2e, 0x32, 0x36, 0x40, 0x44, 0x30, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 
    0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 
    0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x2, 0xd, 0x3, 
    0x2, 0x7, 0x11, 0x3, 0x2, 0x16, 0x17, 0x3, 0x2, 0x18, 0x1b, 0x3, 0x2, 
    0x1c, 0x1d, 0x3, 0x2, 0x1e, 0x1f, 0x3, 0x2, 0x20, 0x22, 0x6, 0x2, 0x15, 
    0x15, 0x1e, 0x20, 0x23, 0x23, 0x2c, 0x2c, 0x3, 0x2, 0x24, 0x25, 0x4, 
    0x2, 0x28, 0x29, 0x2f, 0x36, 0x3, 0x2, 0x2d, 0x2e, 0x4, 0x3, 0x27, 0x27, 
    0x3c, 0x3c, 0x2, 0x1af, 0x2, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x4, 0x63, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x8, 0x81, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x95, 0x3, 0x2, 0x2, 0x2, 0xc, 0x97, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0xa2, 0x3, 0x2, 0x2, 0x2, 0x10, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x12, 0xac, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0xb0, 0x3, 0x2, 0x2, 0x2, 0x16, 0xb7, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xbb, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xce, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x22, 0xe4, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0xef, 0x3, 0x2, 0x2, 0x2, 0x26, 0xfa, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0x106, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x108, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x114, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0x116, 0x3, 0x2, 0x2, 0x2, 0x30, 0x122, 0x3, 
    0x2, 0x2, 0x2, 0x32, 0x124, 0x3, 0x2, 0x2, 0x2, 0x34, 0x130, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0x132, 0x3, 0x2, 0x2, 0x2, 0x38, 0x13e, 0x3, 0x2, 0x2, 
    0x2, 0x3a, 0x146, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x14f, 0x3, 0x2, 0x2, 0x2, 
    0x3e, 0x151, 0x3, 0x2, 0x2, 0x2, 0x40, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x163, 0x3, 0x2, 0x2, 0x2, 0x44, 0x165, 0x3, 0x2, 0x2, 0x2, 0x46, 0x174, 
    0x3, 0x2, 0x2, 0x2, 0x48, 0x176, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x17b, 0x3, 
    0x2, 0x2, 0x2, 0x4c, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x183, 0x3, 0x2, 
    0x2, 0x2, 0x50, 0x189, 0x3, 0x2, 0x2, 0x2, 0x52, 0x199, 0x3, 0x2, 0x2, 
    0x2, 0x54, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x56, 0x1a7, 0x3, 0x2, 0x2, 0x2, 
    0x58, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x5c, 
    0x1ad, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x5, 0x4, 0x3, 0x2, 0x5f, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x60, 0x62, 0x5, 0x6, 0x4, 0x2, 0x61, 0x60, 0x3, 
    0x2, 0x2, 0x2, 0x62, 0x65, 0x3, 0x2, 0x2, 0x2, 0x63, 0x61, 0x3, 0x2, 
    0x2, 0x2, 0x63, 0x64, 0x3, 0x2, 0x2, 0x2, 0x64, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 0x66, 0x6c, 0x7, 0x3c, 0x2, 0x2, 
    0x67, 0x68, 0x5, 0x14, 0xb, 0x2, 0x68, 0x69, 0x5, 0x5c, 0x2f, 0x2, 0x69, 
    0x6c, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6c, 0x5, 0x8, 0x5, 0x2, 0x6b, 0x66, 
    0x3, 0x2, 0x2, 0x2, 0x6b, 0x67, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6a, 0x3, 
    0x2, 0x2, 0x2, 0x6c, 0x7, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x5, 0x44, 
    0x23, 0x2, 0x6e, 0x70, 0x5, 0xa, 0x6, 0x2, 0x6f, 0x71, 0x5, 0x46, 0x24, 
    0x2, 0x70, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x3, 0x2, 0x2, 0x2, 
    0x71, 0x74, 0x3, 0x2, 0x2, 0x2, 0x72, 0x75, 0x5, 0x10, 0x9, 0x2, 0x73, 
    0x75, 0x5, 0x5c, 0x2f, 0x2, 0x74, 0x72, 0x3, 0x2, 0x2, 0x2, 0x74, 0x73, 
    0x3, 0x2, 0x2, 0x2, 0x75, 0x82, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x5, 
    0xa, 0x6, 0x2, 0x77, 0x78, 0x5, 0x48, 0x25, 0x2, 0x78, 0x79, 0x5, 0x5c, 
    0x2f, 0x2, 0x79, 0x82, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x5, 0xa, 0x6, 
    0x2, 0x7b, 0x7c, 0x5, 0x46, 0x24, 0x2, 0x7c, 0x7d, 0x5, 0x10, 0x9, 0x2, 
    0x7d, 0x82, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x5, 0xa, 0x6, 0x2, 0x7f, 
    0x80, 0x5, 0x10, 0x9, 0x2, 0x80, 0x82, 0x3, 0x2, 0x2, 0x2, 0x81, 0x6d, 
    0x3, 0x2, 0x2, 0x2, 0x81, 0x76, 0x3, 0x2, 0x2, 0x2, 0x81, 0x7a, 0x3, 
    0x2, 0x2, 0x2, 0x81, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x82, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0x83, 0x85, 0x5, 0x5a, 0x2e, 0x2, 0x84, 0x86, 0x5, 0xc, 0x7, 
    0x2, 0x85, 0x84, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x3, 0x2, 0x2, 0x2, 
    0x86, 0x96, 0x3, 0x2, 0x2, 0x2, 0x87, 0x8a, 0x5, 0x5a, 0x2e, 0x2, 0x88, 
    0x89, 0x7, 0x3, 0x2, 0x2, 0x89, 0x8b, 0x5, 0x5a, 0x2e, 0x2, 0x8a, 0x88, 
    0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8a, 0x3, 
    0x2, 0x2, 0x2, 0x8c, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x96, 0x3, 0x2, 
    0x2, 0x2, 0x8e, 0x91, 0x5, 0x44, 0x23, 0x2, 0x8f, 0x90, 0x7, 0x3, 0x2, 
    0x2, 0x90, 0x92, 0x5, 0x44, 0x23, 0x2, 0x91, 0x8f, 0x3, 0x2, 0x2, 0x2, 
    0x92, 0x93, 0x3, 0x2, 0x2, 0x2, 0x93, 0x91, 0x3, 0x2, 0x2, 0x2, 0x93, 
    0x94, 0x3, 0x2, 0x2, 0x2, 0x94, 0x96, 0x3, 0x2, 0x2, 0x2, 0x95, 0x83, 
    0x3, 0x2, 0x2, 0x2, 0x95, 0x87, 0x3, 0x2, 0x2, 0x2, 0x95, 0x8e, 0x3, 
    0x2, 0x2, 0x2, 0x96, 0xb, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x7, 0x37, 
    0x2, 0x2, 0x98, 0x9d, 0x5, 0xe, 0x8, 0x2, 0x99, 0x9a, 0x7, 0x3, 0x2, 
    0x2, 0x9a, 0x9c, 0x5, 0xe, 0x8, 0x2, 0x9b, 0x99, 0x3, 0x2, 0x2, 0x2, 
    0x9c, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9d, 
    0x9e, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa0, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x9d, 
    0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x7, 0x38, 0x2, 0x2, 0xa1, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0xa2, 0xa3, 0x5, 0x44, 0x23, 0x2, 0xa3, 0xa4, 0x7, 0x2e, 
    0x2, 0x2, 0xa4, 0xf, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa7, 0x7, 0x4, 0x2, 
    0x2, 0xa6, 0xa8, 0x5, 0x12, 0xa, 0x2, 0xa7, 0xa6, 0x3, 0x2, 0x2, 0x2, 
    0xa7, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa9, 
    0xaa, 0x5, 0x4, 0x3, 0x2, 0xaa, 0xab, 0x7, 0x5, 0x2, 0x2, 0xab, 0x11, 
    0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x7, 0x6, 0x2, 0x2, 0xad, 0xae, 0x5, 
    0x44, 0x23, 0x2, 0xae, 0xaf, 0x7, 0x6, 0x2, 0x2, 0xaf, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0xb0, 0xb1, 0x5, 0x16, 0xc, 0x2, 0xb1, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0xb2, 0xb8, 0x5, 0x1a, 0xe, 0x2, 0xb3, 0xb4, 0x5, 0x44, 0x23, 0x2, 
    0xb4, 0xb5, 0x5, 0x18, 0xd, 0x2, 0xb5, 0xb6, 0x5, 0x16, 0xc, 0x2, 0xb6, 
    0xb8, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb3, 
    0x3, 0x2, 0x2, 0x2, 0xb8, 0x17, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 0x9, 
    0x2, 0x2, 0x2, 0xba, 0x19, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xc1, 0x5, 0x1c, 
    0xf, 0x2, 0xbc, 0xbd, 0x7, 0x12, 0x2, 0x2, 0xbd, 0xbe, 0x5, 0x14, 0xb, 
    0x2, 0xbe, 0xbf, 0x7, 0x13, 0x2, 0x2, 0xbf, 0xc0, 0x5, 0x1a, 0xe, 0x2, 
    0xc0, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xc1, 
    0xc2, 0x3, 0x2, 0x2, 0x2, 0xc2, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 
    0x8, 0xf, 0x1, 0x2, 0xc4, 0xc5, 0x5, 0x1e, 0x10, 0x2, 0xc5, 0xcb, 0x3, 
    0x2, 0x2, 0x2, 0xc6, 0xc7, 0xc, 0x3, 0x2, 0x2, 0xc7, 0xc8, 0x7, 0x2b, 
    0x2, 0x2, 0xc8, 0xca, 0x5, 0x1e, 0x10, 0x2, 0xc9, 0xc6, 0x3, 0x2, 0x2, 
    0x2, 0xca, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xc9, 0x3, 0x2, 0x2, 0x2, 
    0xcb, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xcd, 
    0xcb, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x8, 0x10, 0x1, 0x2, 0xcf, 0xd0, 
    0x5, 0x20, 0x11, 0x2, 0xd0, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 0xc, 
    0x3, 0x2, 0x2, 0xd2, 0xd3, 0x7, 0x2a, 0x2, 0x2, 0xd3, 0xd5, 0x5, 0x20, 
    0x11, 0x2, 0xd4, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd8, 0x3, 0x2, 0x2, 
    0x2, 0xd6, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x3, 0x2, 0x2, 0x2, 
    0xd7, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd9, 
    0xda, 0x8, 0x11, 0x1, 0x2, 0xda, 0xdb, 0x5, 0x22, 0x12, 0x2, 0xdb, 0xe1, 
    0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0xc, 0x3, 0x2, 0x2, 0xdd, 0xde, 0x7, 
    0x6, 0x2, 0x2, 0xde, 0xe0, 0x5, 0x22, 0x12, 0x2, 0xdf, 0xdc, 0x3, 0x2, 
    0x2, 0x2, 0xe0, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xdf, 0x3, 0x2, 0x2, 
    0x2, 0xe1, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe2, 0x21, 0x3, 0x2, 0x2, 0x2, 
    0xe3, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 0x8, 0x12, 0x1, 0x2, 0xe5, 
    0xe6, 0x5, 0x24, 0x13, 0x2, 0xe6, 0xec, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 
    0xc, 0x3, 0x2, 0x2, 0xe8, 0xe9, 0x7, 0x14, 0x2, 0x2, 0xe9, 0xeb, 0x5, 
    0x24, 0x13, 0x2, 0xea, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xee, 0x3, 0x2, 
    0x2, 0x2, 0xec, 0xea, 0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 0x3, 0x2, 0x2, 
    0x2, 0xed, 0x23, 0x3, 0x2, 0x2, 0x2, 0xee, 0xec, 0x3, 0x2, 0x2, 0x2, 
    0xef, 0xf0, 0x8, 0x13, 0x1, 0x2, 0xf0, 0xf1, 0x5, 0x26, 0x14, 0x2, 0xf1, 
    0xf7, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0xc, 0x3, 0x2, 0x2, 0xf3, 0xf4, 
    0x7, 0x15, 0x2, 0x2, 0xf4, 0xf6, 0x5, 0x26, 0x14, 0x2, 0xf5, 0xf2, 0x3, 
    0x2, 0x2, 0x2, 0xf6, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf5, 0x3, 0x2, 
    0x2, 0x2, 0xf7, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xf8, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0xf9, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x8, 0x14, 0x1, 0x2, 
    0xfb, 0xfc, 0x5, 0x2a, 0x16, 0x2, 0xfc, 0x103, 0x3, 0x2, 0x2, 0x2, 0xfd, 
    0xfe, 0xc, 0x3, 0x2, 0x2, 0xfe, 0xff, 0x5, 0x28, 0x15, 0x2, 0xff, 0x100, 
    0x5, 0x2a, 0x16, 0x2, 0x100, 0x102, 0x3, 0x2, 0x2, 0x2, 0x101, 0xfd, 
    0x3, 0x2, 0x2, 0x2, 0x102, 0x105, 0x3, 0x2, 0x2, 0x2, 0x103, 0x101, 
    0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 0x3, 0x2, 0x2, 0x2, 0x104, 0x27, 0x3, 
    0x2, 0x2, 0x2, 0x105, 0x103, 0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 0x9, 
    0x3, 0x2, 0x2, 0x107, 0x29, 0x3, 0x2, 0x2, 0x2, 0x108, 0x109, 0x8, 0x16, 
    0x1, 0x2, 0x109, 0x10a, 0x5, 0x2e, 0x18, 0x2, 0x10a, 0x111, 0x3, 0x2, 
    0x2, 0x2, 0x10b, 0x10c, 0xc, 0x3, 0x2, 0x2, 0x10c, 0x10d, 0x5, 0x2c, 
    0x17, 0x2, 0x10d, 0x10e, 0x5, 0x2e, 0x18, 0x2, 0x10e, 0x110, 0x3, 0x2, 
    0x2, 0x2, 0x10f, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x110, 0x113, 0x3, 0x2, 
    0x2, 0x2, 0x111, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x3, 0x2, 
    0x2, 0x2, 0x112, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x113, 0x111, 0x3, 0x2, 0x2, 
    0x2, 0x114, 0x115, 0x9, 0x4, 0x2, 0x2, 0x115, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0x116, 0x117, 0x8, 0x18, 0x1, 0x2, 0x117, 0x118, 0x5, 0x32, 0x1a, 0x2, 
    0x118, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 0xc, 0x3, 0x2, 0x2, 
    0x11a, 0x11b, 0x5, 0x30, 0x19, 0x2, 0x11b, 0x11c, 0x5, 0x32, 0x1a, 0x2, 
    0x11c, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x119, 0x3, 0x2, 0x2, 0x2, 
    0x11e, 0x121, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x11d, 0x3, 0x2, 0x2, 0x2, 
    0x11f, 0x120, 0x3, 0x2, 0x2, 0x2, 0x120, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x121, 
    0x11f, 0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 0x9, 0x5, 0x2, 0x2, 0x123, 
    0x31, 0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 0x8, 0x1a, 0x1, 0x2, 0x125, 
    0x126, 0x5, 0x36, 0x1c, 0x2, 0x126, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x127, 
    0x128, 0xc, 0x3, 0x2, 0x2, 0x128, 0x129, 0x5, 0x34, 0x1b, 0x2, 0x129, 
    0x12a, 0x5, 0x36, 0x1c, 0x2, 0x12a, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12b, 
    0x127, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x12d, 
    0x12b, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x12e, 
    0x33, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 
    0x9, 0x6, 0x2, 0x2, 0x131, 0x35, 0x3, 0x2, 0x2, 0x2, 0x132, 0x133, 0x8, 
    0x1c, 0x1, 0x2, 0x133, 0x134, 0x5, 0x3a, 0x1e, 0x2, 0x134, 0x13b, 0x3, 
    0x2, 0x2, 0x2, 0x135, 0x136, 0xc, 0x3, 0x2, 0x2, 0x136, 0x137, 0x5, 
    0x38, 0x1d, 0x2, 0x137, 0x138, 0x5, 0x3a, 0x1e, 0x2, 0x138, 0x13a, 0x3, 
    0x2, 0x2, 0x2, 0x139, 0x135, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13d, 0x3, 
    0x2, 0x2, 0x2, 0x13b, 0x139, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 0x3, 
    0x2, 0x2, 0x2, 0x13c, 0x37, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13b, 0x3, 0x2, 
    0x2, 0x2, 0x13e, 0x13f, 0x9, 0x7, 0x2, 0x2, 0x13f, 0x39, 0x3, 0x2, 0x2, 
    0x2, 0x140, 0x147, 0x5, 0x3c, 0x1f, 0x2, 0x141, 0x142, 0x7, 0x37, 0x2, 
    0x2, 0x142, 0x143, 0x5, 0x44, 0x23, 0x2, 0x143, 0x144, 0x7, 0x38, 0x2, 
    0x2, 0x144, 0x145, 0x5, 0x3a, 0x1e, 0x2, 0x145, 0x147, 0x3, 0x2, 0x2, 
    0x2, 0x146, 0x140, 0x3, 0x2, 0x2, 0x2, 0x146, 0x141, 0x3, 0x2, 0x2, 
    0x2, 0x147, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x148, 0x150, 0x5, 0x40, 0x21, 
    0x2, 0x149, 0x14a, 0x5, 0x42, 0x22, 0x2, 0x14a, 0x14b, 0x5, 0x3c, 0x1f, 
    0x2, 0x14b, 0x150, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14d, 0x5, 0x3e, 0x20, 
    0x2, 0x14d, 0x14e, 0x5, 0x3a, 0x1e, 0x2, 0x14e, 0x150, 0x3, 0x2, 0x2, 
    0x2, 0x14f, 0x148, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x149, 0x3, 0x2, 0x2, 
    0x2, 0x14f, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x150, 0x3d, 0x3, 0x2, 0x2, 0x2, 
    0x151, 0x152, 0x9, 0x8, 0x2, 0x2, 0x152, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x153, 
    0x154, 0x8, 0x21, 0x1, 0x2, 0x154, 0x15b, 0x5, 0x56, 0x2c, 0x2, 0x155, 
    0x15b, 0x5, 0x44, 0x23, 0x2, 0x156, 0x157, 0x7, 0x37, 0x2, 0x2, 0x157, 
    0x158, 0x5, 0x14, 0xb, 0x2, 0x158, 0x159, 0x7, 0x38, 0x2, 0x2, 0x159, 
    0x15b, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x153, 0x3, 0x2, 0x2, 0x2, 0x15a, 
    0x155, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x156, 0x3, 0x2, 0x2, 0x2, 0x15b, 
    0x160, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15d, 0xc, 0x4, 0x2, 0x2, 0x15d, 
    0x15f, 0x5, 0x42, 0x22, 0x2, 0x15e, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15f, 
    0x162, 0x3, 0x2, 0x2, 0x2, 0x160, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x160, 
    0x161, 0x3, 0x2, 0x2, 0x2, 0x161, 0x41, 0x3, 0x2, 0x2, 0x2, 0x162, 0x160, 
    0x3, 0x2, 0x2, 0x2, 0x163, 0x164, 0x9, 0x9, 0x2, 0x2, 0x164, 0x43, 0x3, 
    0x2, 0x2, 0x2, 0x165, 0x166, 0x8, 0x23, 0x1, 0x2, 0x166, 0x167, 0x5, 
    0x5a, 0x2e, 0x2, 0x167, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x168, 0x169, 0xc, 
    0x4, 0x2, 0x2, 0x169, 0x16e, 0x5, 0x4a, 0x26, 0x2, 0x16a, 0x16b, 0xc, 
    0x3, 0x2, 0x2, 0x16b, 0x16c, 0x7, 0x26, 0x2, 0x2, 0x16c, 0x16e, 0x7, 
    0x2e, 0x2, 0x2, 0x16d, 0x168, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16a, 0x3, 
    0x2, 0x2, 0x2, 0x16e, 0x171, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x16d, 0x3, 
    0x2, 0x2, 0x2, 0x16f, 0x170, 0x3, 0x2, 0x2, 0x2, 0x170, 0x45, 0x3, 0x2, 
    0x2, 0x2, 0x171, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x172, 0x175, 0x5, 0x4a, 
    0x26, 0x2, 0x173, 0x175, 0x5, 0x48, 0x25, 0x2, 0x174, 0x172, 0x3, 0x2, 
    0x2, 0x2, 0x174, 0x173, 0x3, 0x2, 0x2, 0x2, 0x175, 0x47, 0x3, 0x2, 0x2, 
    0x2, 0x176, 0x177, 0x7, 0x13, 0x2, 0x2, 0x177, 0x178, 0x5, 0x50, 0x29, 
    0x2, 0x178, 0x49, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17c, 0x5, 0x4c, 0x27, 
    0x2, 0x17a, 0x17c, 0x5, 0x4e, 0x28, 0x2, 0x17b, 0x179, 0x3, 0x2, 0x2, 
    0x2, 0x17b, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x4b, 0x3, 0x2, 0x2, 0x2, 
    0x17d, 0x17f, 0x7, 0x37, 0x2, 0x2, 0x17e, 0x180, 0x5, 0x50, 0x29, 0x2, 
    0x17f, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x180, 0x3, 0x2, 0x2, 0x2, 
    0x180, 0x181, 0x3, 0x2, 0x2, 0x2, 0x181, 0x182, 0x7, 0x38, 0x2, 0x2, 
    0x182, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x183, 0x185, 0x7, 0x39, 0x2, 0x2, 
    0x184, 0x186, 0x5, 0x50, 0x29, 0x2, 0x185, 0x184, 0x3, 0x2, 0x2, 0x2, 
    0x185, 0x186, 0x3, 0x2, 0x2, 0x2, 0x186, 0x187, 0x3, 0x2, 0x2, 0x2, 
    0x187, 0x188, 0x7, 0x3a, 0x2, 0x2, 0x188, 0x4f, 0x3, 0x2, 0x2, 0x2, 
    0x189, 0x18e, 0x5, 0x52, 0x2a, 0x2, 0x18a, 0x18b, 0x7, 0x3, 0x2, 0x2, 
    0x18b, 0x18d, 0x5, 0x52, 0x2a, 0x2, 0x18c, 0x18a, 0x3, 0x2, 0x2, 0x2, 
    0x18d, 0x190, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x18c, 0x3, 0x2, 0x2, 0x2, 
    0x18e, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x51, 0x3, 0x2, 0x2, 0x2, 0x190, 
    0x18e, 0x3, 0x2, 0x2, 0x2, 0x191, 0x195, 0x5, 0x54, 0x2b, 0x2, 0x192, 
    0x196, 0x5, 0x4a, 0x26, 0x2, 0x193, 0x194, 0x7, 0x13, 0x2, 0x2, 0x194, 
    0x196, 0x5, 0x14, 0xb, 0x2, 0x195, 0x192, 0x3, 0x2, 0x2, 0x2, 0x195, 
    0x193, 0x3, 0x2, 0x2, 0x2, 0x196, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x197, 
    0x19a, 0x5, 0x4a, 0x26, 0x2, 0x198, 0x19a, 0x5, 0x14, 0xb, 0x2, 0x199, 
    0x191, 0x3, 0x2, 0x2, 0x2, 0x199, 0x197, 0x3, 0x2, 0x2, 0x2, 0x199, 
    0x198, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x53, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x1a0, 
    0x7, 0x2e, 0x2, 0x2, 0x19c, 0x19d, 0x7, 0x26, 0x2, 0x2, 0x19d, 0x19f, 
    0x7, 0x2e, 0x2, 0x2, 0x19e, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x1a2, 
    0x3, 0x2, 0x2, 0x2, 0x1a0, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a1, 
    0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a0, 
    0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a6, 0x5, 0x58, 0x2d, 0x2, 0x1a4, 0x1a6, 
    0x5, 0x5a, 0x2e, 0x2, 0x1a5, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a3, 
    0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x55, 0x3, 
    0x2, 0x2, 0x2, 0x1a7, 0x1a8, 0x5, 0x58, 0x2d, 0x2, 0x1a8, 0x57, 0x3, 
    0x2, 0x2, 0x2, 0x1a9, 0x1aa, 0x9, 0xa, 0x2, 0x2, 0x1aa, 0x59, 0x3, 0x2, 
    0x2, 0x2, 0x1ab, 0x1ac, 0x9, 0xb, 0x2, 0x2, 0x1ac, 0x5b, 0x3, 0x2, 0x2, 
    0x2, 0x1ad, 0x1ae, 0x9, 0xc, 0x2, 0x2, 0x1ae, 0x5d, 0x3, 0x2, 0x2, 0x2, 
    0x28, 0x63, 0x6b, 0x70, 0x74, 0x81, 0x85, 0x8c, 0x93, 0x95, 0x9d, 0xa7, 
    0xb7, 0xc1, 0xcb, 0xd6, 0xe1, 0xec, 0xf7, 0x103, 0x111, 0x11f, 0x12d, 
    0x13b, 0x146, 0x14f, 0x15a, 0x160, 0x16d, 0x16f, 0x174, 0x17b, 0x17f, 
    0x185, 0x18e, 0x195, 0x199, 0x1a0, 0x1a5, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

CortoParser::Initializer CortoParser::_init;
